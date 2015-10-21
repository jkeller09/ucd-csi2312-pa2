//
// Created by Jessica Keller on 9/17/15.
//
#include <iostream>
#include <fstream>
#include <sstream>

#include "Point.h"

// iostream
using std::cout;
using std::endl;

// fstream
using std::ifstream;

// sstream
using std::stringstream;
using std::string;

int main() {
    ifstream csv("points.txt");

    if (csv.is_open()) {

        while (getline(csv,line)) {

            cout << "Line: " << line << endl;

            stringstream lineStream(line);
            string value;
            double d;
            Point p(5);

            int i = 1;
            while (getline(lineStream, value, ',')) {
                d = stod(value);

                cout << "Value: " << d << endl;

                p.setValue(i++, d);
            }
            cout << "Point: " << p << endl;
        }
    }
    csv.close();

    return 0;
}

const char Point::Point_VALUE_DELIM = ',';


// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)

Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Constructor


Point::Point(int dim, double values) {
    int dim;
    double values;
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

