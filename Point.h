//
// Created by Jessica Keller on 9/17/15.
//
// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef clustering__point_h
#define clustering__point_h

#include <iostream>

namespace Clustering {

    class Point {

        int dim;
        double *values;

    public:

        static const char POINT_VALUE_DELIM;

                                    // Constructors

        Point(int);                      // default constructor
        Point(int, double *);

        // Copy constructor, Overloaded operator=, Destructor

        Point(const Point &);
        Point &operator=(const Point &);
        ~Point();

        //Accessor & Mutator methods

        int getDims() const { return dim; }
        void setValue(int, double);
        double getValue(int) const;

        // Functions

        double distanceTo(const Point &) const;

        //Members

        Point &operator*=(double);
        Point &operator/=(double);
        const Point operator*(double) const;
        const Point operator/(double) const;

        double &operator[](int index) {return values[index - 1];}

        //Friends

        friend Point &operator+=(Point &, const Point &);
        friend Point &operator-=(Point &, const Point &);
        friend const Point operator+(const Point &, const Point &);
        friend const Point operator-(const Point &, const Point &);

        friend bool operator==(const Point &, const Point &);
        friend bool operator!=(const Point &, const Point &);

        friend bool operator<(const Point &, const Point &);
        friend bool operator>(const Point &, const Point &);
        friend bool operator<=(const Point &, const Point &);
        friend bool operator>=(const Point &, const Point &);

        friend std::ostream &operator<<(std::ostream &, const Point &);
        friend std::istream &operator>>(std::istream &, Point &);


    };
}

#endif // __point_h