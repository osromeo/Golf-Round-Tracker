#include "par3.h"
#include <iostream>

using namespace std;

Par3::Par3() : Hole(), clubUsed("None") {}

Par3::Par3(Score score, int putts, bool gir, std::string clubUsed)
    : Hole(score, putts, gir), clubUsed(clubUsed) {}

string Par3::getClubUsed() const {
    return clubUsed;
}

void Par3::setClubUsed(const std::string& clubUsed) {
    this->clubUsed = clubUsed;
}

void Par3::displayInfo() const {
    cout << "Par 3 Hole - ";
    cout << "Score " << score + 3;
    Hole::displayInfo();
    cout << "Club used: " << clubUsed << endl;
}