//
// Created by Jessica
//
#include <iostream>
#include <fstream>
#include <sstream>

#include "Point.h"



namespace Clustering{

    const char POINT_VALUE_DELIM = ',';

    unsigned int __id;

    std::vector<double> __values;


// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)

Point::Point(int p) {

}

// Constructor


Point::Point(int dim, double values) {

}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically

Point::~Point() {
    // no-op
}

Point &Point::operator*=(double d) {
    for(int i=0; i < dim; i++)
        values[i] *= d;
    return *this;
}

Point & Point::operator/=(double d) {
    for(int i=0; i < dim; i++)
        values[i] /= d;
    return *this;
}

Point & Point::operator+=(double d) {
    for(int i=0; i < dim; i++)
        values[i] += d;
    return *this;
}

Point & Point::operator-=(double d) {
    for(int i=0; i < dim; i++)
        values[i] -= d;
    return *this;
}

const Point Point::operator*(double d) const {
    return Point(dim) *= d;
}

const Point Point::operator/(double d) const {
    return Point(dim) /= d;
}

const Point Point::operator+(double d) const {
    return Point(dim) += d;
}

const Point Point::operator-(double d) const {
    return Point(dim) -= d;
}
// Mutator methods
// Change the values of private member variables
int getDims() const { return dim;}

void Point::setValue(int, double) {
    int dim;
    double values;
}

// Accessors
// Return the current values of private member variables

double Point::getValue(int) const {
    int dim;
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

