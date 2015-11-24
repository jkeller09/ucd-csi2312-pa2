//
// Created by Jessica
//

#include <fstream>
#include <cmath>
#include <iomanip>

#include "kmeans.h"

namespace Clustering{

    KMeans::KMeans(int km, unsigned int dim){

        dimensions = dim;

        PointPtr cArray[km];

        Cluster *clustArray = new Cluster[km];

        std::ifstream inFile;
        inFile.open("cluster.txt");
        inFile >> clustArray[0];

        clustArray[0].pickPoints(km, *pointArray);
    }

    double KMeans::computeClusteringScore(int km, Cluster *clustArray){

        double c1 = 0, c2 = 0;
        int num1 = 0, num2 = 0;

        for (int i = 0; i < km; i++){

            c1 += clustArray[i].intraClusterDistance();
        }

        for(int i = 0; i < km; i++){

            c2 += clustArray[i].interClusterDistance();

        }

        for(int i = 0; i < km; i++){

            num1 += clustArray[i].getClusterEdges();

        }

        for(int i = 0; i < km; i++){

            num2 += clustArray[i].interClusterEdges();

        }

        return ((c1+c2)/(num1+num2));
    }
}