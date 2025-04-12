#include "hole.h"

// Default constructor
Hole::Hole() : score(PAR), putts(2), gir(true) {}

// Parametrized constructor
Hole::Hole(Score score, int putts, bool gir) : score(score), putts(putts), gir(gir) {}

// Getter and Setter functions
Score Hole::getScore() const {
    return score;
}

void Hole::setScore(Score score) {
    this->score = score;
}

int Hole::getPutts() const {
    return putts;
}

void Hole::setPutts(int putts) {
    this->putts = putts;
}

bool Hole::getGIR() const {
    return gir;
}

void Hole::setGIR(bool gir) {
    this->gir = gir;
}

// Virtual function to display hole info
void Hole::displayInfo() const {
    std::cout << ", Putts: " << putts << ", GIR: " << (gir ? "Yes" : "No") << std::endl;
}