//
// Created by Jessica
//

#ifndef PROGRAMMING_ASSIGNMENT_EXCEPTIONS_H
#define PROGRAMMING_ASSIGNMENT_EXCEPTIONS_H

#include <iostream>
#include "Cluster.h"

using namespace Clustering;

class DimensionalityMisMatchEx{

    std::string name;

public:
    DimensionalityMisMatchEx(int);
    std::getName();


};

class OutOfBoundsEx{

    std::string name;

public:

    OutOfBoundsEx(int);
    std::getName();

};

class RemoveFromEmptyEx{

    std::string name;

public:
    RemoveFromEmptyEx(int);
    std::getName;


};
#endif //PROGRAMMING_ASSIGNMENT_EXCEPTIONS_H
