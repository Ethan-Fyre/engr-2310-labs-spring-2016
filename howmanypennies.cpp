/* howmanypennies.cpp
 * Ethan Sayles
 * Jan 29, 2016
 * Purpose: To calculate the number of pennies, nickels, dimes, and quarters needed to pay for an item
            that is priced by user input.
 */

#include <iostream>

using namespace std;

int main() {
    //Variable Declaration
    double Price_P = 0.0;   // Price of the item in Pennies
    double Price_N = 0.0;   // Price of the item in Nickels
    double Price_D = 0.0;   // Price of the item in Dimes
    double Price_Q = 0.0;   // Price of the item in Quarters
    double Item_Price = 0.0; // User-entered Price of the Item

    //Prompt the User to Input the Price of the Item
    cout << "Please enter the price of the item in dollars: $";
    cin >> Item_Price;

    //Calculate the Price in Pennies, Nickels, Dimes, and Quarters, and then print that value
    Price_P = Item_Price * 100;
    Price_N = Item_Price * 5;
    Price_D = Item_Price * 10;
    Price_Q = Item_Price * 4;
    cout << "You'd need " << Price_P << " pennies to buy that item!" << endl;
    cout << "You'd need " << Price_N << " nickels to buy that item!" << endl;
    cout << "You'd need " << Price_D << " dimes to buy that item!" << endl;
    cout << "You'd need " << Price_Q << " quarters to buy that item!" << endl;
    return 0;
}