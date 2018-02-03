/* Pythagoras.cpp
 * Ethan Sayles
 * Feb 26, 2016
 * Purpose:Have a user enter two sides of a right triangle, and calculate the hypotenuse
 */
#include <iostream>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main() {

    //Define Constants and Variables
    string side1 = "";          //User entered number for side 1 (string)
    string side2 = "";          //User entered number for side 2 (string)
    double side_1 = 0;          //User entered number for side 1
    double side_2 = 0;          //User entered number for side 1
    bool valid = false;         //If the user input is valid, this is true

    //Have the User enter numbers for side 1 and 2, and calculate the hypotenuse
        cout << "Enter first side of triangle: ";
        while (!valid) {
            getline(cin, side1);
            if (side1 == "0") {
                side_1 = 0;
                break;
            }
            side_1 = atof(side1.c_str());
            if (side_1 == 0){
                cout << "That was not a number. Please enter a number: ";
            }
            else {
                break;
            }
        }
        cout << "Enter second side of triangle: ";
        while (!valid) {
            getline(cin, side2);
            if (side2 == "0") {
                side_2 = 0;
                break;
            }
            side_2 = atof(side2.c_str());
            if (side_2 == 0){
                cout << "That was not a number. Please enter a number: ";
            }
            else {
                break;
            }
        }
        cout << "The hypotenuse is: " << sqrt((pow(side_1,2) + pow(side_2,2))) << endl;



    return 0;

}