#include <iostream>
#include <iomanip>
#include <string>
#include "../include/2dshapes.h"

#define PI 3.14159265359
using namespace std;

void askCircum(const char*);
void askArea(const char*);

Circle::Circle(double x) {
    RADIUS = x;
}

double Circle::calcCircleCircum() {
    return (PI * RADIUS) + (PI * RADIUS); // sorry this is retarded
}                                         // but it has bugs, so...

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

double TriCir::calcTriCircum() {
    return SIDEx + SIDEy + SIDEz;
}

TriAr::TriAr(double x, double y) {
    BASE = x; HEIGHT = y;
}

double TriAr::calcTriArea() {
    return (BASE * HEIGHT)/2;
}

void calcCircle(int CHOICE, double TEMP) {
    if (CHOICE == 1) {
        askCircum("circle");
    }
    else {
       askArea("circle"); 
    }
    cin >> TEMP;
    Circle CIRCLE1(TEMP);
    if (CHOICE == 1) {
        cout << "The result is: " << CIRCLE1.calcCircleCircum() << endl;
    }
    else {
        cout << "The result is: " << CIRCLE1.calcCircleArea() << endl;
    }
}

void calcRect(int CHOICE, double TEMP, double TEMPT){
    if (CHOICE == 1) {
        askCircum("rectangle");
    }
    else {
        askArea("rectangle");
    }
    cin >> TEMP;
    cout << "Please enter the other side: ";
    cin >> TEMPT;
    Rectangle RECT1(TEMP, TEMPT);
    if (CHOICE == 1) {
        cout << "\nThe result is: " << RECT1.calcRectCircum() << endl;
    }
    else {
        cout << "\nThe result is: " << RECT1.calcRectArea() << endl;
    }
}

void calcTri(int CHOICE, double TEMP1, double TEMP2, double TEMP3);

void askCircum(const char* CHOICE) {
    cout << "\nWe will now calculate the circumference of a "<< CHOICE <<" \nPlease enter the sides: ";
}
void askArea(const char* CHOICE) {
    cout << "\nWe will now calculate the area of a "<< CHOICE <<" \nPlease enter the sides: ";
}