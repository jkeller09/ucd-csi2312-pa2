//Created by Jessica Keller

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Point.h"
#include "Point.cpp"

using namespace std;

//test



double computeArea(Point &, Point &, Point &);    //forward declaration

//main driver

int main() {
    Point p;

    cout << fixed <<setprecision(2) << computeArea(x, y, z);

    p.setValue(i, 10* (dims / 2-i));

    cout << p << endl;

    Point p1(p);

    cout << p1 << endl;

    p1 = dims / 3;

    cout <<p-p1 << endl;

    Point p2(p-p1);

    cout << p2 << endl;

    p2/= dims * 1.5;

    Point p3(p1-p2);

    cout << p3 << endl;

    p3 *= dims * 1;

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

