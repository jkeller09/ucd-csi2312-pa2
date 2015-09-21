//Created by Jessica Keller

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Point.h"
#include "Point.cpp"

using namespace std;

double computeArea(Point &, Point &, Point &);    //forward declaration

//main driver

int main(void) {
    Point p;

    cout << fixed <<setprecision(2) << computeArea(x, y, z);

    return 0;

}

//global function

double computeArea(Point &x, Point &y, Point &z){       //function description
                                                        //function implementation
    int area, perimeter, s;

    perimeter = x+y+z;
    s = perimeter/2;
    area = sqrt(s(s-x)(s-y)(s-z));

    return area;

}