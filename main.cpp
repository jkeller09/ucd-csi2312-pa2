//
// Created by Jessica
//

#include <iostream>
#include <cmath>
#include "Point.h"
#include "Cluster.h"

using namespace std;
using namespace Clustering;

double computeArea(Point &p1, Point &p2, Point &p3);

int main() {
    Point p();

    cout << computeArea;

    p.setValues(i, 20* (dim / 2-i));

    cout << p << endl;

    Point p1(p);

    cout << p1 << endl;

    p1 = dim / 3;

    cout <<p-p1 << endl;

    Point p2(p-p1);

    cout << p2 << endl;

    p2/= dim * 1.5;

    Point p3(p1-p2);

    cout << p3 << endl;

    p3 *= dim * 1;

    return 0;

}

double computeArea(Point &p1, Point &p2, Point &p3){

    double first = p1.distanceTo(p2);
    double second = p2.distanceTo(p3);
    double third = p3.distanceTo(p1);

    double sum = ((first+second+third)/2);

    double area = sqrt(sum*(sum-first)*(sum-second)*(sum-third));

    return area;
}