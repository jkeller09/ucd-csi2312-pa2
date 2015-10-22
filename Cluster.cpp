//
// Created by Jessica
//
#include <iostream>
#include "Cluster.h"

const char Cluster::POINT_CLUSTER_ID_DELIM = ':';

unsigned int Cluster::__idGenerator = 1;

namespace Clustering {


    std::ostream &operator<<(std::ostream &os, const Cluster &c) {
        os << "cluster dimension " << c.__dimension << ", centroid " << c.__centroid.get();
        return os;
    }

    std::istream &operator>>(std::istream &istream, Cluster &cluster){
        std::stringline;
        while(getline(istream, line)){
            std::cerr << "Line: " << line << std::endl;
            int d =(int) std::count(line.begin(), line.end(), Point::POINT_VALUE_DELIM);
            PointPtr ptr = new Point (d+1);
            std::stringstream lineStream(line);

            lineStream >> *ptr;
            cluster.add(ptr);
            std::cerr << "Added point:"<< *ptr << std::endl;
        };

        return istream;
    }

    Point &Cluster::operator[](int index){
        LNodeptr nodePtr = _points;
        Point p(1);

        int i = 0;
        while(nodePtr!= nullptr){
            if(i == index){
                return *nodePtr->p;
            }else {
                i++;
                nodePtr=nodePtr->next;
            }
        }
        return p;
    }
};
Cluster::Cluster(const PointPtr &ptr){
    const PointPtr;
}

Cluster Cluster::operator=(const Point &otherp) {
    double dim = 0;
    if (&otherp != this) {
        dim = otherp.dim;
        arr = new double[otherp.dim];
    }
    return *this;

};

