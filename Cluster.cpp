//
// Created by Jessica
//

#include "Cluster.h"

using namespace Clustering;


Cluster Cluster::operator=(const Point &otherp) {
    double dim = 0;
    if (&otherp != this) {
        dim = otherp.dim;
        arr = new double[otherp.dim];
    }
    return *this;

};