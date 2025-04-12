#include "par5.h"
#include <iostream>
using namespace std;

Par5::Par5() : Hole(), eagleOpportunity(false) {}

Par5::Par5(Score score, int putts, bool gir, bool eagleOpportunity)
    : Hole(score, putts, gir), eagleOpportunity(eagleOpportunity) {}

bool Par5::getEagleOpportunity() const {
    return eagleOpportunity;
}

void Par5::setEagleOpportunity(bool eagleOpportunity) {
    this->eagleOpportunity = eagleOpportunity;
}

void Par5::displayInfo() const {
    cout << "Par 5 Hole - ";
    cout << "Score " << score + 5;
    Hole::displayInfo();
    cout << "Eagle Opportunity: " << (eagleOpportunity ? "Yes" : "No") << endl;
}