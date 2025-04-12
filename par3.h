
#ifndef PAR3_H
#define PAR3_H

#include "hole.h"

class Par3 : public Hole {
private:
    std::string clubUsed; // Club used for tee shot

public:
    // Constructors
    Par3();
    Par3(Score score, int putts, bool gir, std::string clubUsed);

    // Getter and Setter for clubUsed
    std::string getClubUsed() const;
    void setClubUsed(const std::string& clubUsed);

    // Overriding displayInfo
    void displayInfo() const override;
};

#endif // PAR3_H
