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
class Triangle {
    public:
        double calcTriCircum();
        double calcTriArea();
};

class TriCir : public Triangle {
    protected:
        double SIDEx, SIDEy, SIDEz;
    public:
        TriCir(double, double, double);
};

class TriAr : public Triangle {
    protected:
        double BASE, HEIGHT;
    public:
        TriAr(double, double);
};
////////////////////////////////////////////// end of TRIANGLE FAMILY