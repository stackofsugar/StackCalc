#include "../include/stdinc.h"

#define PI 3.14159265359
using namespace std;

void askCircum(const char*, const char*);
void askArea(const char*, const char*);

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
        askCircum("circle", "radius");
    }
    else {
       askArea("circle", "radius"); 
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
        askCircum("rectangle", "side");
    }
    else {
        askArea("rectangle", "side");
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

void calcTri(int CHOICE, double TEMP1, double TEMP2, double TEMP3) {
    if (CHOICE == 1) {
        askCircum("triangle", "side");
        cin >> TEMP1;
        cout << "Please enter another side: ";
        cin >> TEMP2;
        cout << "Please enter the last side: ";
        cin >> TEMP3;
            TriCir TRI1(TEMP1, TEMP2, TEMP3);
        cout << "The result is: " << TRI1.calcTriCircum() << endl;
    }
    else {
        askArea("triangle", "base");
        cin >> TEMP1; // BASE
        cout << "Please enter the height: ";
        cin >> TEMP2;
            TriAr TRI2(TEMP1, TEMP2);
        cout << "The result is: " << TRI2.calcTriArea() << endl;
    }
}

void askCircum(const char* CHOICE, const char* CHOICE2) {
    cout << "\nWe will now calculate the circumference of a "<< CHOICE <<" \nPlease enter the " << CHOICE2 <<": ";
}
void askArea(const char* CHOICE, const char* CHOICE2) {
    cout << "\nWe will now calculate the area of a "<< CHOICE <<" \nPlease enter the " << CHOICE2 <<": ";
}