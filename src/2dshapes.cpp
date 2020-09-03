#include <iostream>
#include <iomanip>
#include <string>
#include "../include/2dshapes.h"

#define PI 3.14159265359
using namespace std;

Circle::Circle(double x) {
    RADIUS = x;
}

double Circle::calcCircleCircum() {
    return PI * RADIUS * 2;
}

double Circle::calcCircleArea() {
    return PI * RADIUS * RADIUS;
}

//////////////////////

Rectangle::Rectangle(double x, double y) {
    WIDTH = x; HEIGHT = y;
}

double Rectangle::calcRectCircum() {
    return 2 * (WIDTH + HEIGHT);
}

double Rectangle::calcRectArea() {
    return WIDTH * HEIGHT;
}

//////////////////////

TriCir::TriCir(double x, double y, double z) {
    SIDEx = x; SIDEy = y; SIDEz=z;
}

TriAr::TriAr(double x, double y) {
    BASE = x; HEIGHT = y;
}

