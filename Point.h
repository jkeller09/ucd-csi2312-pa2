//
// Created by Jessica
//

#ifndef PROGRAMMING_ASSIGNMENT_POINT_H
#define PROGRAMMING_ASSIGNMENT_POINT_H
#include <iostream>
#include "Cluster.h"


namespace Clustering {

    typedef unsigned int Dimension;

    template<typename T, int dim>
    class Point {

        double *__values;
        unsigned __dimensions;


    private:

        Dimension __dimension;

    public:

        static const char POINT_VALUE_DELIM;

        Point(unsigned d) : __dimensions(d), __values(nullptr) {}


        friend std::ostream &operator<<(std::ostream &os, const Point &p);

        // Constructors

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

#endif //PROGRAMMING_ASSIGNMENT_POINT_H
