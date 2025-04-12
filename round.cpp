
#include "round.h"
#include <iostream>
#include <fstream>
using namespace std;

// Constructor
Round::Round() {}

// Destructor
Round::~Round() {

    // Clean up dynamically allocated memory
    for (Hole* hole : holes) {
        delete hole;
    }
}

// Add a hole to the round
void Round::addHole(Hole* hole) {
    holes.push_back(hole);
}

// Display the round details
void Round::displayRound() {
    int totalScore = 0;
    for (size_t i = 0; i < holes.size(); ++i) {
        cout << "Hole " << i + 1 << ": ";
        holes[i]->displayInfo();
        totalScore += holes[i]->getScore();
    }
    cout << "Score relative to par: " << totalScore << endl;
}

// Write the round details to a file
void Round::writeRoundToFile(const string& filename) {
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cerr << "Error: Could not open file " << filename << " for writing." << endl;
        return;
    }
    // Temporarily redirect std::cout to outFile
    streambuf* oldBuf = cout.rdbuf();
    cout.rdbuf(outFile.rdbuf());

    // Write the round details (using your existing displayRound method)
    displayRound();

    // Restore std::cout’s original streambuf
    cout.rdbuf(oldBuf);
    outFile.close();
}
