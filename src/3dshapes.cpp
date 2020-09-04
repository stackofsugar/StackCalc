#include "../include/stdinc.h"
#define PI 3.14159265359
using namespace std;

void askVol(const char*, const char*);
void askArea3d(const char*, const char*);

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

void askVol3d(const char* CHOICE, const char* CHOICE2) {
    cout << "\nWe will now calculate the volume of a "<< CHOICE <<" \nPlease enter the " << CHOICE2 <<": ";
}
void askArea3d(const char* CHOICE, const char* CHOICE2) {
    cout << "\nWe will now calculate the area of a "<< CHOICE <<" \nPlease enter the " << CHOICE2 <<": ";
}

void calcSphere(int CHOICE, double TEMP) {
    if (CHOICE == 1) {
        askVol3d("sphere", "radius");
    } else {
        askArea3d("sphere", "radius");
    }
    cin >> TEMP;
    Sphere SPH1(TEMP);
    if (CHOICE == 1) {
        cout << "The result is: " << SPH1.calcVolSph() << endl;
    } else {
        cout << "The result is: " << SPH1.calcArSph() << endl;
    }
}

void calcCube (int CHOICE, double TEMP) {
    if (CHOICE == 1) {
        askVol3d("cube", "edge");
    } else {
        askArea3d("cube", "edge");
    }
    cin >> TEMP;
    Cube CUBE1(TEMP);
    if (CHOICE == 1) {
        cout << "The result is: " << CUBE1.calcVolCube() << endl;
    } else {
        cout << "The result is: " << CUBE1.calcArCube() << endl;
    }
}