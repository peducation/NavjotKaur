/*-----------------------------------------------------------------------------------
File Name:        Math_calculations.cpp(This file contains the Main function)
Description:      The objective of this program is to do math calculations such as adiition, 
                  subtraction, multiplication and mixed exercises with user's choice.
Written by:       Navjot Kaur
Date:             2020-12-07
-----------------------------------------------------------------------------------------*/

#include <iostream>
#include <ctime>
#include "Calculations.h"
using namespace std;

//Main function to drive the code
int main() {

    //Defining variables
    string name;
    int ch, choice;
    char c;

    //define random function to take random values for calculations
    srand(time(0));

    cout << "Enter your name ";
    cin >> name;
    cout << "Welcome, " << name << "!" << endl;

    //Selecting option what user want to do
    do {
        cout << "Enter your choice: " << endl;
        cout << "1. do practice first " << endl;
        cout << "2. Do your test  " << endl;
        cout << "3. Stop the program " << endl;
        cin >> ch;
        if (ch == 1) {
            display();
            cin >> choice;

            //call the function to do practice 
            doPractice(choice);   

            //To ask if user want to repeat
            cout << "Do you want to do again(y/n)?";
            cin >> c;
        }
        if (ch == 2) {
            display();
            cin >> choice;

            //call the function to do test
            doTest(choice);

            //To ask if user want to repeat
            cout << "Do you want to do again(y/n)?";
            cin >> c;
        }
        if(ch == 3) {

            //if user want to stop the program
            break;
        }
    } while (c == 'y');  //Loop until the user want to repeat

    return 0;
}
