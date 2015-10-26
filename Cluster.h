//
// Created by Jessica
//

#ifndef PROGRAMMING_ASSIGNMENT_CLUSTER_H
#define PROGRAMMING_ASSIGNMENT_CLUSTER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include "Point.h"

//iostream
using std::cout;
using std::endl;

//fstream
using std::ifstream;

//sstream
using std::stringstream;
using std::string;


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

    private:

        static unsigned int __idGenerator;
/*
    public:
        int size;
        LNodePtr points;

        static const char POINT_CLUSTER_ID_DELIM;

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
*/

        class Centroid {                    // private inner/nested/member class
            PointPtr __centroid;
            Dimension __dimension;


        private:
            static unsigned int __idGenerator;

        public:
            static const char POINT_CLUSTER_ID_DELIM;

            Centroid(Dimension d) :
                    __dimension(d),
                    __centroid(new Point(d)) { }

            ~Centroid() { delete __centroid; }

            const Point get() const {
                return *__centroid;
            }

            void set(const Point &point) {
                *__centroid = point;
            }

            static unsigned getidGenerator(int id){
                __idGenerator = id;
            }
        };

        Centroid __centroid;                  // private member
        Dimension __dimension;

    public:
        Cluster(Dimension d) :
                __dimension(d),
                __centroid(d) { }


        const Point getCentroid() const {
            return __centroid.get();
        }

        void setCentroid(const Point &point) {
            __centroid.set(point);
        }

        Dimension getDimension() const {
            return __dimension;
        }

        void pickPoints(int k, PointPtr *pointArray){

        }

        double intraClusterDistance(const Cluster &c1, const Cluster &c2) const {

        }

        double interClusterDistance(const Cluster &c1, const Cluster &c2){

        }

        int getClusterEdges(const Cluster &c1, const Cluster &c2) {
            int size;
            int answer;

            size = &c1 - &c2;
            answer = size * (size -1)/2;
        }

        double interClusterEdges(const Cluster &c1, const Cluster &c2){
            double size;
            double a;

            size = &c1 - &c2;
            a = size * (size -1)/2;


        }

        friend std::ostream &operator<<(std::ostream &os, const Cluster &c);
    };

    class KMeans{

    public:
        Cluster point_space;

        ifstream csv('points.txt');

        if (csv.is_open()) {

            while (getline(csv,line)) {

                cout << "Line: " << line << endl;

                stringstream lineStream(line);
                string value;
                double d;
                point_space p(5);

                int i = 1;
                while (getline(lineStream, value, ',')) {
                    d = stod(value);

                    cout << "Value: " << d << endl;

                    p.setValue(i++, d);
                }
                cout << "Point: " << p << endl;
            }
        }
        csv.close();

        static const double SCORE_DIFF_THRESHOLD;

        double score;
        double scoreDiff;

        scoreDiff = SCORE_DIFF_THRESHOLD + 1;

        double computeClusteringScore(){

        }
    };




}
#endif //PROGRAMMING_ASSIGNMENT_CLUSTER_H
