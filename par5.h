#ifndef PAR5_H
#define PAR5_H

#include "hole.h"

class Par5 : public Hole {
private:
    bool eagleOpportunity; // Whether there was an eagle opportunity

public:
    // Constructors
    Par5();
    Par5(Score score, int putts, bool gir, bool eagleOpportunity);

    // Getter and Setter for eagleOpportunity
    bool getEagleOpportunity() const;
    void setEagleOpportunity(bool eagleOpportunity);

    // Overriding displayInfo
    void displayInfo() const override;
};

#endif // PAR5_H