/* selfdestruct.cpp
 * Ethan Sayles
 * Feb 10, 2016
 * Purpose: Prompt the user to enter a secret code to stop a self-destruct sequence
 */
#include <iostream>
#include <time.h>

using namespace std;
// make a delay function
void wait ( int seconds )
{
    clock_t endwait;
    endwait = clock () + seconds * CLOCKS_PER_SEC ;
    while (clock() < endwait) {}
}

int main() {
    const int secret_code = 147258369; // The secret code needed to de-activate the self-destruct sequence
    int user_guess = 0;                // User-entered secret-code meant to deactivate the bomb

    //Prompt the user for a secret code
    cout << "-- You have triggered the nuclear warhead launch sequence --" << endl;
    wait(1);
    cout << "-- To abort, enter the 9-digit security code: ";
    cin >> user_guess;


    // check if the user guess is the same as the secret code and act accordingly
    if (user_guess == secret_code) {
        cout << "-- Security code verified --" << endl;
        wait(1);
        cout << "-- Launch Sequence aborted --" << endl;
    }
    else {
        cout << "-- Security code incorrect --" << endl;
        wait(1);
        cout << "-- Missle Launch in 3--" << endl;
        wait(1);
        cout << "-- 2 --" << endl;
        wait(1);
        cout << "-- 1 --" << endl;
        wait(1);
        cout << "-- Missle Launched!! --" << endl;

    }
    return 0;
}