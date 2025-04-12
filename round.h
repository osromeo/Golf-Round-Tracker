
#ifndef ROUND_H
#define ROUND_H

#include <vector>
#include "hole.h"

class Round {
private:
    std::vector<Hole*> holes;  // Vector to store the holes

public:
    // Constructor
    Round();

    // Destructor
    ~Round();

    // Add a hole to the round
    void addHole(Hole* hole);

    // Display the details of the round
    void displayRound();

    // Writes round details to the specified file.
    void writeRoundToFile(const std::string& filename);
};



#endif // ROUND_H