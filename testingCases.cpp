
// //
// // Created by owens on 2/22/2025.
// //
//
// #include <iostream>
// #include "hole.h"
// #include "par3.h"
// #include "par4.h"
// #include "par5.h"
// #include "round.h"
//
// using namespace std;
//
// // Function prototypes for testing each class.
// bool testPar3();
// bool testPar4();
// bool testPar5();
// bool testRound();
//
// int main() {
//     bool passed = true;
//
//     if (!testPar3()) {
//         cout << "Par3 tests FAILED." << endl;
//         passed = false;
//     }
//     if (!testPar4()) {
//         cout << "Par4 tests FAILED." << endl;
//         passed = false;
//     }
//     if (!testPar5()) {
//         cout << "Par5 tests FAILED." << endl;
//         passed = false;
//     }
//     if (!testRound()) {
//         cout << "Round tests FAILED." << endl;
//         passed = false;
//     }
//
//     if (passed) {
//         cout << "Passed all test cases" << endl;
//     }
//
//     return 0;
// }
//
// bool testPar3() {
//     bool passed = true;
//
//     // Create a Par3 hole with score=PAR, 1 putt, GIR true, and club "9iron"
//     Par3 hole(PAR, 1, true, "9iron");
//
//     if (hole.getClubUsed() != "9iron") {
//         cout << "FAILED Par3: Expected club '9iron', got '" << hole.getClubUsed() << "'" << endl;
//         passed = false;
//     }
//     if (hole.getScore() != PAR) {
//         cout << "FAILED Par3: Expected score " << PAR << ", got " << hole.getScore() << endl;
//         passed = false;
//     }
//     if (hole.getPutts() != 1) {
//         cout << "FAILED Par3: Expected 1 putt, got " << hole.getPutts() << endl;
//         passed = false;
//     }
//     if (hole.getGIR() != true) {
//         cout << "FAILED Par3: Expected GIR true" << endl;
//         passed = false;
//     }
//
//     return passed;
// }
//
// bool testPar4() {
//     bool passed = true;
//
//     // Create a Par4 hole with score=BIRDIE (-1), 2 putts, GIR false, and fairways hit = 1.
//     Par4 hole(BIRDIE, 2, false, 1);
//
//     if (hole.getScore() != BIRDIE) {
//         cout << "FAILED Par4: Expected score " << BIRDIE << ", got " << hole.getScore() << endl;
//         passed = false;
//     }
//     if (hole.getPutts() != 2) {
//         cout << "FAILED Par4: Expected 2 putts, got " << hole.getPutts() << endl;
//         passed = false;
//     }
//     if (hole.getGIR() != false) {
//         cout << "FAILED Par4: Expected GIR false" << endl;
//         passed = false;
//     }
//     if (hole.getFairwaysHit() != 1) {
//         cout << "FAILED Par4: Expected fairways hit 1, got " << hole.getFairwaysHit() << endl;
//         passed = false;
//     }
//
//     return passed;
// }
//
// bool testPar5() {
//     bool passed = true;
//
//     // Create a Par5 hole with score = BOGEY (1), 3 putts, GIR true, and eagle opportunity false.
//     Par5 hole(BOGEY, 3, true, false);
//
//     if (hole.getScore() != BOGEY) {
//         cout << "FAILED Par5: Expected score " << BOGEY << ", got " << hole.getScore() << endl;
//         passed = false;
//     }
//     if (hole.getPutts() != 3) {
//         cout << "FAILED Par5: Expected 3 putts, got " << hole.getPutts() << endl;
//         passed = false;
//     }
//     if (hole.getGIR() != true) {
//         cout << "FAILED Par5: Expected GIR true" << endl;
//         passed = false;
//     }
//     if (hole.getEagleOpportunity() != false) {
//         cout << "FAILED Par5: Expected eagle opportunity false" << endl;
//         passed = false;
//     }
//
//     return passed;
// }
//
// bool testRound() {
//     bool passed = true;
//
//     // Create a Round and add one hole of each type.
//     Round round;
//     Par3* hole1 = new Par3(PAR, 1, true, "9iron");    // Par3: score 0 relative to par.
//     Par4* hole2 = new Par4(BIRDIE, 2, false, 1);        // Par4: score -1 relative to par.
//     Par5* hole3 = new Par5(BOGEY, 3, true, true);        // Par5: score 1 relative to par.
//
//     round.addHole(hole1);
//     round.addHole(hole2);
//     round.addHole(hole3);
//
//     // Calculate total score relative to par: 0 + (-1) + 1 should equal 0.
//     int totalScore = hole1->getScore() + hole2->getScore() + hole3->getScore();
//     if (totalScore != 0) {
//         cout << "FAILED Round: Expected total score 0, got " << totalScore << endl;
//         passed = false;
//     }
//
//     return passed;
// }
