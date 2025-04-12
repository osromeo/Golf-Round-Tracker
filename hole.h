
#ifndef HOLE_H
#define HOLE_H

#include <iostream>

enum Score { PAR = 0, BIRDIE = -1, EAGLE = -2, BOGEY = 1, DOUBLE_BOGEY = 2 };

class Hole {
protected:
    Score score;
    int putts;
    bool gir; // Greens in Regulation

public:
    // Constructors
    Hole();
    Hole(Score score, int putts, bool gir);

    // Virtual destructor
    virtual ~Hole() {}

    // Getter and setter functions
    Score getScore() const;
    void setScore(Score score);
    int getPutts() const;
    void setPutts(int putts);
    bool getGIR() const;
    void setGIR(bool gir);

    // Virtual method to display hole info (to be overridden)
    virtual void displayInfo() const;
};

#endif // HOLE_H