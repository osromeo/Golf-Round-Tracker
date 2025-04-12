
#include <iostream>
#include "round.h"
#include "par3.h"
#include "par4.h"
#include "par5.h"

using namespace std;

int get_int_from_user();
string get_word_from_user();

int main() {
    Round round;

    //loop through one iteration of a hole
    for (int i = 0; i < 18; i++) {
        cout << "Enter details for hole " << i + 1 << ":\n" << endl;

        // Prompt for the hole's par (3, 4, or 5)
        cout << "Enter hole par (3, 4, or 5): " << endl;
        int holePar = get_int_from_user();
        while (holePar != 3 && holePar != 4 && holePar != 5) {
            cout << "Invalid input (3, 4, or 5): " << endl;
            holePar = get_int_from_user();
        }

        // Prompt for the score relative to par.
        cout << "Enter your score relative to par:" << endl;
        cout << "(-2 for Eagle, -1 for Birdie, 0 for Par, 1 for Bogey, 2 for Double Bogey): " << endl;
        int scoreInput = get_int_from_user();
        while (scoreInput != -2 && scoreInput != -1 && scoreInput != 0 &&
               scoreInput != 1 && scoreInput != 2) {
            cout << "Invalid score. Please enter one of -2, -1, 0, 1, or 2: " << endl;
            scoreInput = get_int_from_user();
               }
        Score score = static_cast<Score>(scoreInput);

        // Prompt for number of putts.
        cout << "Enter number of putts: " << endl;
        int putts = get_int_from_user();

        // Prompt for GIR (Green in Regulation)
        cout << "Did you hit the GIR? (y/n): " << endl;
        string girInput = get_word_from_user();
        while (girInput != "y" && girInput != "Y" &&
               girInput != "n" && girInput != "N") {
            cout << "Invalid input! Please enter 'y' or 'n': " << endl;
            girInput = get_word_from_user();
        }
        bool gir = (girInput == "y" || girInput == "Y");

        // The score is set to SCORE::PAR by default.
        Hole* hole = nullptr;

        // Select and gather additional info based on the hole's par.
        switch (holePar) {
            case 3: {
                cout << "Enter club used for tee shot (9iron / 54wedge): " << endl;
                string clubUsed = get_word_from_user();
                // Construct a Par3 hole. The first argument is the score
                hole = new Par3(score, putts, gir, clubUsed);
                break;
            }
            case 4: { //do if par 4
                cout << "Did you hit the fairway? (y/n): " << endl;
                string fairwayInput = get_word_from_user();
                while (fairwayInput != "y" && fairwayInput != "Y" &&
                       fairwayInput != "n" && fairwayInput != "N") {
                    cout << "Invalid input! Please enter 'y' or 'n': " << endl;
                    fairwayInput = get_word_from_user();
                }
                bool hitFairway = (fairwayInput == "y" || fairwayInput == "Y");
                // Construct a Par4 hole.
                hole = new Par4(score, putts, gir, hitFairway);
                break;
            }
            case 5: { //do if par 5
                cout << "Was there an eagle opportunity? (y/n): " << endl;
                string eagleInput = get_word_from_user();
                while (eagleInput != "y" && eagleInput != "Y" &&
                       eagleInput != "n" && eagleInput != "N") {
                    cout << "Invalid input! Please enter 'y' or 'n': " << endl;
                    eagleInput = get_word_from_user();
                }
                bool eagleOpportunity = (eagleInput == "y" || eagleInput == "Y");
                // Construct a Par5 hole.
                hole = new Par5(score, putts, gir, eagleOpportunity);
                break;
            }
        }

        round.addHole(hole);
    }

    //write round data to a file and display round in console.
    round.writeRoundToFile("rounds.txt");
    round.displayRound();

    return 0;
}


// Input helper function to get an integer from the user.
int get_int_from_user() {
    int input;
    cin >> input;

    while (cin.fail() || cin.peek() != '\n') {
        cin.clear();
        cin.ignore(10000, '\n'); // clear the buffer
        cout << "Invalid input! Please enter a number: ";
        cin >> input;
    }

    cin.ignore(10000, '\n'); // clear any remaining input
    return input;
}

// Input helper function to get a single word from the user.
string get_word_from_user() {
    string input;
    getline(cin, input);

    while (input.find(" ") != string::npos || input.empty()) {
        cout << "Invalid input! Please enter one word: ";
        getline(cin, input);
    }

    cin.ignore(10000, '\n'); // clear any remaining input
    return input;
}
