#include "par4.h"
#include <iostream>
using namespace std;

Par4::Par4() : Hole(), fairwaysHit(0) {}

Par4::Par4(Score score, int putts, bool gir, int fairwaysHit)
    : Hole(score, putts, gir), fairwaysHit(fairwaysHit) {}

int Par4::getFairwaysHit() const {
    return fairwaysHit;
}

void Par4::setFairwaysHit(int fairwaysHit) {
    this->fairwaysHit = fairwaysHit;
}

void Par4::displayInfo() const {
    cout << "Par 4 Hole - ";
    cout << "Score " << score + 4;
    Hole::displayInfo();
    cout << "Fairways hit: " << (fairwaysHit ? "Yes" : "No") << endl;
}