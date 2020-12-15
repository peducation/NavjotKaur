/*----------------------------------------------------------------------------------------
File Name:      ATM_Machine.cpp(This file contains the 'main' function)
Description:    This program is for ATM Machine where you can enter with valid PIN number  
                and either save or withdraw money.
Written by:     Navjot Kaur
Date:           2020-12-09
---------------------------------------------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include<sstream>
#include<iomanip>
#include "Source.h"
using namespace std;

//Main function to drive code
int main() {

    //Define object of class Account
    Account account;

    //Define and intialize variables
    int PIN;
    int pinAttempts = 3;  //As maximum PIN attempts would be 3
    int ch;
    char ans;
    cout << "Welcome to our ATM services." << endl;

//Loop until PIN attempts would not be 0
while (pinAttempts > 0) {
    cout << "Enter your PIN." << endl;
        cin >> PIN;

        //Check if PIN is valid or not
        if (PIN == 1234) {
            cout << "PIN entry successful." << endl;
                pinAttempts = -1;  //just a trick
        }
        else {
            cout << "Wrong PIN entry, try again." << endl;
            pinAttempts--;    //Pin attempts will decrease by 1 after every wrong entry
            cout << "Remaining PIN attempts chances " << pinAttempts << endl;
        }
    if (pinAttempts == 0) {
        cout << "You have exceeded the PIN attempts, Good bye" << endl;
        break;
    }
    //Go further if entry is sucessfull
    if (pinAttempts == -1) {
        account.getOptions();         //call function with class object
    }

}
    
    return 0;
}

