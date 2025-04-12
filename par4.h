
#ifndef PAR4_H
#define PAR4_H

#include "hole.h"

class Par4 : public Hole {
private:
    bool fairwaysHit; // Number of fairways hit

public:
    // Constructors
    Par4();
    Par4(Score score, int putts, bool gir, int fairwaysHit);

    // Getter and Setter for fairwaysHit
    int getFairwaysHit() const;
    void setFairwaysHit(int fairwaysHit);

    // Overriding displayInfo
    void displayInfo() const override;
};

#endif // PAR4_H