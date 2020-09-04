#include "../include/stdinc.h"
#define PI 3.14159265359
using namespace std;

Cube::Cube(double x) {
    EDGE = x;
}
double Cube::calcVolCube() {
    return EDGE * EDGE * EDGE;
}
double Cube::calcArCube() {
    return (EDGE * EDGE) * 6;
}

Sphere::Sphere(double x) {
    RADIUS = x;
}
double Sphere::calcVolSph() {
    return (4 * (PI * RADIUS * RADIUS * RADIUS)) / 3;
}
double Sphere::calcArSph() {
    return 4 * (PI * RADIUS * RADIUS);
}