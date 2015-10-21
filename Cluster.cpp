//
// Created by Jessica
//

#include "Cluster.h"


namespace Clustering {


    std::ostream &operator<<(std::ostream &os, const Cluster &c) {
        os << "cluster dimension " << c.__dimension << ", centroid " << c.__centroid.get();
        return os;
    }
};

Cluster Cluster::operator=(const Point &otherp) {
    double dim = 0;
    if (&otherp != this) {
        dim = otherp.dim;
        arr = new double[otherp.dim];
    }
    return *this;

};

const char Cluster::POINT_CLUSTER_ID_DELIM = ':';

unsigned int Cluster::__idGenerator = 1;