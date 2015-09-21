//
// Created by Jessica Keller on 9/17/15.
//

#ifndef PROGRAMMING_ASSIGNMENT2_CLUSTER_H
#define PROGRAMMING_ASSIGNMENT2_CLUSTER_H

#include "Point.h"

namespace Clustering {

    typedef Point *PointPtr;
    typedef struct LNode *LNodePtr;

    // struct LNode;
    // typedef LNode *LNodePtr;

    struct LNode {

        PointPtr p;
        LNodePtr next;

    };

    class Cluster {

        int size;
        LNodePtr points;


    public:

        Cluster() : size(0), points(nullptr) {};

        //Copy constructor, overloaded operator=, destructor

        Cluster(const Cluster &);
        Cluster &operator=(const Cluster &);
        ~Cluster();

        //Set functions allow calling c1.add(c2.remove(p));

        void add(const PointPtr &);
        const PointPtr &remove(const PointPtr &);

        //Overloaded Operators

        //IO

        friend std::ostream &operator<<(std::ostream &, const Cluster &);
        friend std::istream &operator>>(std::istream &, Cluster &);

        //Set-preserving operators (do not duplicate points in the space)
        //Friends

        friend bool operator==(const Cluster &lhs, const Cluster &rhs);

        //Members

        Cluster &operator+=(const Cluster &rhs);    //Union
        Cluster &operator-=(const Cluster &rhs);    //(asymmetric) difference

        Cluster &operator+=(const Point &rhs);      //add point
        Cluster &operator-=(const Point &rhs);      //remove point

        //Set-destructive operators (duplicate points in the space)
        //Friends

        friend const Cluster operator+(const Cluster &lhs, const Cluster &rhs);
        friend const Cluster operator-(const Cluster &lhs, const Cluster &rhs);

        friend const Cluster operator+(const Cluster &lhs, const PointPtr &rhs);
        friend const Cluster operator-(const Cluster &lhs, const PointPtr &rhs);

    };

}
#endif //PROGRAMMING_ASSIGNMENT2_CLUSTER_H
