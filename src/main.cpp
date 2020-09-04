#include "../include/stdinc.h"

using namespace std;

// Additional function declaration
void askForOp(const char*);
void displayError();
void calcCircle(int, double);
void calcRect(int, double, double);
void calcTri(int, double, double, double);

int CHOICE1, OPERATION;
double TEMP, TEMPT;

int main() {
    cout << "StackCalc \nA simple calculator for basic shapes \nCopyright (C) 2020 Stackofsugar, Some rights reserved\n" << endl;
    cout << "Please pick a shape (only 2D is supported for now):" << endl;
    cout << "1. Circle \n2. Rectangle \n3. Triangle \nYour choice: ";

    cin >> CHOICE1;

    if(CHOICE1 == 1) {
        askForOp("circle");
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
        askForOp("rectangle");
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
        askForOp("triangle");
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
    else {
        displayError();
        return 0;
    }
}

void askForOp(const char* choice) {
    cout << "\nWhat " << choice << " operation do you want to calculate?" << endl;
    cout << "1. Circumference \n2. Area \nYour choice: ";
    cin >> OPERATION;
}
void displayError(){
    cerr << "You have entered an invalid value. We can't process your request." << endl;
}