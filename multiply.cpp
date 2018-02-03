/* multiply.cpp
 * Ethan Sayles
 * Feb 26, 2016
 * Purpose:Have a user entered array, and multiply the numbers together
 */
#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {

    //Define Constants and Variables
    string line = "";          //User entered number
    const int SIZE = 10;       //Size of user array
    int usernum[SIZE] = {};    //Array of user nums
    int answer = 1;            //Multiplication of the array
    int i = 0;                 //Counter

    //Have the User enter numbers into the array, and exit if a 0, non-integer, or array is filled.
    for (i = 0; i < SIZE; i++) {
        cout << "Enter an integer, or 0 to quit: ";
        getline(cin, line);

        if (line == "0") {
            break;
        }

        //convert user input to a int
        usernum[i] = atoi(line.c_str());
        if (usernum[i] == 0) {
            cout << "That is not an integer" << endl;
            break;
        }
    }

    cout << "The product of the following numbers:" << endl;

    //Print out the numbers entered, and calculate the answer
    for (int j = 0; j < i; j++){
        cout << usernum[j] << " ";
        answer*= usernum[j];
    }
    cout << endl << "is " << answer << endl;
    return 0;

}