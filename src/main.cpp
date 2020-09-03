#include <iostream>
#include <iomanip>
#include <string>
#include "../include/2dshapes.h"

using namespace std;

void askForOp(const char*);
void displayError();

int CHOICE1, OPERATION;
double TEMP;

int main() {
    cout << "StackCalc \nA simple calculator for basic shapes \nCopyright (C) 2020 Stackofsugar, Some rights reserved\n" << endl;
    cout << "Please pick a shape (only 2D is supported for now):" << endl;
    cout << "1. Circle \n2. Rectangle \n3. Triangle \nYour choice: ";

    cin >> CHOICE1;

    if(CHOICE1 == 1) {
        askForOp("circle");
        if (OPERATION == 1) { // circumference
            cout << "\nWe will now calculate the circumference of a circle \nPlease enter the radius: ";
            cin >> TEMP;
            Circle CIRCLE1(TEMP);
            cout << "The result is: " << CIRCLE1.calcCircleCircum() << endl;
            return 0;
        } 
        else if (OPERATION == 2) // area
        {
            cout << "\nWe will now calculate the area of a circle \nPlease enter the radius: ";
            cin >> TEMP;
            Circle CIRCLE1(TEMP);
            cout << "\nThe result is: " << CIRCLE1.calcCircleArea() << endl;
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

        } 
        else if (OPERATION == 2) // area
        {
            
        }
        else {
            displayError();
            return 0;
        }
    }
    else if(CHOICE1 == 3) {
        askForOp("triangle");
        if (OPERATION == 1) { // circumference

        } 
        else if (OPERATION == 2) // area
        {
            
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
    system("clear");
}
void displayError(){
    cerr << "You have entered an invalid value. We can't process your request." << endl;
}