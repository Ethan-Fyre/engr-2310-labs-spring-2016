/* MoreFunc.cpp
 * Ethan Sayles
 * Apr, 8 2016
 * Purpose: Iterate through 10 possible temperature differences.
 */
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <assert.h>
#include <cmath>

using namespace std;

//function prototypes
double resistance(double r, double t, double a);
void test_resistance();
double input_double(string prompt);

int main() {

    //Define Constants and Variables
    double R_0 = 0.0;      //User-entered initial resistance measured in Ohms.
    double alpha = 0.0;    //Temperature coefficient of resistance for either copper of iron
    double delta_T = 0.0;  //Temperature change of the object.
    string alpha_val = ""; //User-entered value for alpha. (I or C)
    //Print a message explaining the purpose of the program
    cout << "Purpose: This program calculates the change in resistance, for a range of temperature changes." << endl;

    //unit-test
    test_resistance();
    cout << "Unit tests passes, proceeding."<<endl;
    //Prompt the user to enter the initial resistance of the object.
    R_0 = input_double("Enter initial resistance of object (in ohms): ");

    //prompt the user to enter a c or an i, and check to make sure they actually do.
    cout << "Enter 'c' for copper or 'i' for iron: ";
    while (true) {
        getline(cin,alpha_val);
        if (alpha_val == "c"){
            alpha = 0.00386;
            break;
        }
        else if (alpha_val == "i"){
            alpha = 0.00651;
            break;
        }
        else{
            cout << "That was not 'c' or 'i'. Please enter a correct value: ";
        }
    }


    //Print out the results in a table
    cout << "Delta T:        Resistance: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << setw(8) <<  pow(10,i) << "         " << setw(10) << setprecision(5) << resistance(R_0, pow(10,i),alpha) << endl;
    }
    return 0;
}

/** calculates the resistance
 * @param r the initial resistance
 * @param t the change in temperature
 * @param a the temperature coefficient of resistance
 * @return final_resistance the resistance after the delta t
 */
double resistance(double r, double t, double a){
    double final_resistance = 0.0;   //Final resistance of the item.
    final_resistance = r*(1+a*t);     //Equation for the final resistance
    return final_resistance;
}

/** Validates a user double input
 * @param prompt the prompt to the user
 * @return user_response the double entered by the user
 */
double input_double(string prompt){
    string input = "";             //user's text input
    double user_response = 0.0;    //user's input as a double

    //prompt user with passed string
    cout << prompt;

    //continue prompting until they enter a double
    while (true) {
        getline(cin, input);
        user_response = atof(input.c_str());
        if(user_response == 0) {
            cout << "That was not a double. Please enter a non-zero double: ";
        }
        else {
            break;
        }
    }
    return user_response;
}

/** unit test for resistance()
 * @param null
 * @return void
 */
void test_resistance(){
    const double EPSILON = 0.001;  //value for double unit testing
    assert(abs(resistance(100,10,0.00386) - 103.86) <= EPSILON);
    assert(abs(resistance(330,100,0.00651) - 544.83) <= EPSILON);
    assert(abs(resistance(570,10,0.00386) - 592.002) <= EPSILON);
    assert(abs(resistance(292,15,0.00386) - 308.9068) <= EPSILON);
    assert(abs(resistance(714,102,0.00651) - 1188.11028) <= EPSILON);
    assert(abs(resistance(27,158,0.00651) - 54.77166) <= EPSILON);
}