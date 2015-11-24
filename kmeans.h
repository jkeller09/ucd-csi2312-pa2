//
// Created by Jessica
//

#ifndef PROGRAMMING_ASSIGNMENT_KMEANS_H
#define PROGRAMMING_ASSIGNMENT_KMEANS_H

#include "point.h"
#include "cluster.h"

namespace Clustering {

    template<int k, int dim>
    class KMeans {

        unsigned int dim = 0;
        unsigned int const max = 100;

    public:

        std::vector<Cluster>;

        static const double SCORE_DIFF_THRESHOLD;

        KMeans(int, unsigned int);

        double computeClusteringScore(int, Cluster *);

    };
}
#endif //PROGRAMMING_ASSIGNMENT_KMEANS_H
