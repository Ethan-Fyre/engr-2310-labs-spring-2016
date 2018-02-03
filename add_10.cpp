/* add_10.cpp
 * Ethan Sayles
 * Apr, 15 2016
 * Purpose: Add 10 to a function using pass by reference
 */
#include <iostream>

using namespace std;

//function prototype
void add10(int *mem);

int main() {
    int var1 = 5;       //First variable to be changed
    int var2 = 325;     //Second variable to be changed

    //Print the values of var1 and var2
    cout << "Before the call to add10 function, the first variable is " << var1
        << endl << "The second variable is " << var2 <<endl;

    //Call add10 on both variables
    add10(&var1);
    add10(&var2);

    //Print the values of var1 and var2
    cout << "After the call to add10 function, the first variable is " << var1
    << endl << "The second variable is " << var2 <<endl;

}

/** adds 10 to the object by accessing the memory address
 * @param mem the memory address of the variable to change
 * @return void
 */
void add10(int *mem){
    *mem += 10;   //add 10 to the value stored at the 'mem'ory address
}