#include "../include/stdinc.h"

using namespace std;

// Additional function declaration
void askForOp2d(const char*);
void askForOp3d(const char*);
void displayError();
void calcCircle(int, double);
void calcRect(int, double, double);
void calcTri(int, double, double, double);
void calcSphere(int, double);
void calcCube(int, double);

int CHOICE1, OPERATION;
double TEMP, TEMPT;

int main() {
    cout << "StackCalc \nA simple calculator for basic shapes \nCopyright (C) 2020 Stackofsugar, Some rights reserved\n" << endl;
    cout << "Please pick a shape (only 2D is supported for now):" << endl;
    cout << "1. Circle \n2. Rectangle \n3. Triangle \n4. Cube \n5. Sphere \nYour choice: ";

    cin >> CHOICE1;

    if(CHOICE1 == 1) {
        askForOp2d("circle");
        if (OPERATION == 1) { // circumference
            calcCircle(1, 0);
            return 0;
        } 
        else if (OPERATION == 2) // area
        {
            calcCircle(2, 0);
            return 0;
        }
        else {
            displayError();
            return 0;
        }
    } 
    else if(CHOICE1 == 2) {
        askForOp2d("rectangle");
        if (OPERATION == 1) { // circumference
            calcRect(1, 0, 0);
        } 
        else if (OPERATION == 2) // area
        {
            calcRect(2, 0, 0);
        }
        else {
            displayError();
            return 0;
        }
    }
    else if(CHOICE1 == 3) {
        askForOp2d("triangle");
        if (OPERATION == 1) { // circumference
            calcTri(1, 0, 0, 0);
        } 
        else if (OPERATION == 2) // area
        {
            calcTri(2, 0, 0, 0);
        }
        else {
            displayError();
            return 0;
        }  
    }
    else if(CHOICE1 == 4) {
        askForOp3d("cube");
        if (OPERATION == 1) {
            calcCube(1, 0);
        }
        else {
            calcCube(2, 0);
        }
    }
    else if(CHOICE1 ==5) {
        askForOp3d("sphere");
        if (OPERATION == 1) {
            calcSphere(1, 0);
        }
        else {
            calcSphere(2, 0);
        }
    }
    else {
        displayError();
        return 0;
    }
}

void askForOp2d(const char* choice) {
    cout << "\nWhat " << choice << " operation do you want to calculate?" << endl;
    cout << "1. Circumference \n2. Area \nYour choice: ";
    cin >> OPERATION;
}
void askForOp3d(const char* choice) {
    cout << "\nWhat " << choice << " operation do you want to calculate?" << endl;
    cout << "1. Volume \n2. Surface area \nYour choice: ";
    cin >> OPERATION;
}
void displayError(){
    cerr << "You have entered an invalid value. We can't process your request." << endl;
}