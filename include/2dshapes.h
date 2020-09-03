#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Circle {
    private:
        double RADIUS;
    public:
        Circle (double);
        double calcCircleCircum();
        double calcCircleArea();
};

class Rectangle {
    private:
        double WIDTH, HEIGHT;
    public:
        Rectangle (double, double);
        double calcRectCircum();
        double calcRectArea();
};

////////////////////////////////////////////// TRIANGLE FAMILY
class TriCir {
    protected:
        double SIDEx, SIDEy, SIDEz;
    public:
        TriCir(double, double, double);
        double calcTriCircum();
};

class TriAr {
    protected:
        double BASE, HEIGHT;
    public:
        TriAr(double, double);
        double calcTriArea();
};
////////////////////////////////////////////// end of TRIANGLE FAMILY