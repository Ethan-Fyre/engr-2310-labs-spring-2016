/*degtorad.cpp
   Ethan Sayles
   Apr 1, 2016
   Purpose:convert degrees to radians
 */


#include <iostream>
#include<assert.h>
#include<cmath>

using namespace std;

//function prototype
double convert(double degrees);
bool test_convert();

int main() {

    test_convert();
    cout << "All tests passed!" << endl;
    return 0;
}

/** Takes a degree value and converts it to radians
 * @param degree the angle in degrees
 * @return radians the angle in radians
 */
double convert(double degrees){
    double PI = 3.1415926535897932384626433;     //Pi to the 25 decimal
    double radians = degrees * (2.0 * (PI/360.0));
    return radians;
}
/** tests if convert() works for 6 different values
 * @param none
 * @return none
 */
bool test_convert(){
    const double epsilon = 0.001;   //used for unit testing
    assert(abs(convert(0) - 0) <= epsilon);
    assert(abs(convert(45) - 0.785398) <= epsilon);
    assert(abs(convert(90) - 1.5708) <= epsilon);
    assert(abs(convert(180) - 3.14159) <= epsilon);
    assert(abs(convert(142) - 2.47837) <= epsilon);
    assert(abs(convert(360) - 6.28319) <= epsilon);
}
