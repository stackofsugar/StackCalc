#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Cube {
    private:
        double EDGE;
    public:
        Cube(double);
        double calcVolCube();
        double calcArCube();
};

class Sphere {
    private:
        double RADIUS;
    public:
        Sphere(double);
        double calcVolSph();
        double calcArSph();
};