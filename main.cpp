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
    cout << "Hello, Clustering!" << endl;

    const unsigned int dimensions = 10;
    Cluster c(dimensions);

    cout << c << endl;

    Point centroid = c.getCentroid();

    cout << centroid << endl;

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