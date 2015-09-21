//
// Created by Jessica Keller on 9/17/15.
//

#include "Point.h"

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)

Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)

Point::Point(int dim, double values) {

}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically

Point::~Point() {
    // no-op
}

// Mutator methods
// Change the values of private member variables
int getDims() const { return dim;}

void Point::setValue(int, double) {
    ;
}

// Accessors
// Return the current values of private member variables

double Point::getValue(int) const {
    ;
}


double Point::distanceTo(const Point &other) const {    //calculates the distance between two points
    if (other.dim == dim) {
        double sum = 0;
        for (int i = 0; i < dim; i++) {
            double diff = values[i] - other.values[i];
            sum += diff * diff;
        }
        return sqrt(sum);
    }
    return 0;

}