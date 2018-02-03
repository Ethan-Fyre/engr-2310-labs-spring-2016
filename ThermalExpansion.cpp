/* ThermalExpansion.cpp
 * Ethan Sayles
 * Feb 26, 2016
 * Purpose: Create a program that calculates the deflection of a beam under a range of loads starting
      at 0 and counting by 100 up to the User-Entered maximum load.
 */
#include <iostream>
#include <iomanip>


using namespace std;

int main() {

    //Define Constants and Variables
    const double alpha = 6.7e-6;    //Default coefficient of expansion (in/(in F))
    const double step_size = 10;      //Size of steps Temperature (F)
    double L_initial = 0;              //User-Entered value for the initial length (in)

    //Print a message explaining the purpose of the program
    cout << "This program calculates the linear expansion for a length of steel," << endl;
    cout << "for a range of temerature changes." << endl;

    //Prompt the user to enter the maximum load for which to calculate the deflection and store this value to max_load
    cout << "Please enter inital length of object (in inches): ";
    cin >> L_initial;

    //Calculate the linear expansion and print it in a table.
    cout << "Delta T   L Change" << endl;  //Start the Table
    for (double Delta_T = 10; Delta_T <= 100; Delta_T += step_size) {    //Temperature change
        double L_change = L_initial * alpha * Delta_T;    //measurable length gained or lost in the thermal expansion/contraction
        cout << setw(7) << setprecision(4) << Delta_T << setw(11) << setprecision(5) << L_change << endl;
    }
    return 0;
}