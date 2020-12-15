/*-----------------------------------------------------------------------------------
File Name:        Calculations.cpp(This file contains Source File)
Description:      The objective of this program is to do math calculations such as adiition, 
                  subtraction, multiplication and mixed exercises with user's choice.
Written by:       Navjot Kaur
Date:             2020-12-07
-----------------------------------------------------------------------------------------*/
#include <iostream>
#include <ctime>
#include <cmath>
#include "Calculations.h"
using namespace std;
//Declaration of functions

//Function to take first random number
int randomValue1() {
    //generating numbers from 0 to 20
    int irand1 = rand() % 21; 
    return irand1;
}


//Function to take second random number
int randomValue2() {
    //generating numbers from 0 to 20
    int irand2 = rand() % 21;
    return irand2;
}


//Function to display options
void display() {
    cout << "What would do you want to do: " << endl;
    cout << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication"
        << endl << "4. Mixed Exercise" << endl;
}

//Function to do practice 
void doPractice(int choice) {
    int ans, v1, v2;
    int count = 1;
    int attempt = 1;
    cout << "Now you have 10 questions to solve:" << endl;

    //Loop will continue until 10 right answers
    while (count <= 10) {
        v1 = randomValue1();
        v2 = randomValue2();
        switch (choice) {
               //Addition calculations
        case 1: cout << count << ". " << v1 << "+" << v2 << "=" << endl;
                cout << "Enter your answer";
                cin >> ans;
                //it will ask to re-enter the answer if it is not right
                while (ans != v1 + v2) {
                    cout << "Wrong answer, try again!" << endl;
                    cout << "Enter your answer";
                    cin >> ans;
                }
                cout << "Very good" << endl;
                count++;
            break;

                 //Calculations for subtraction
        case 2:    cout << count << ". " << v1 << "-" << v2 << "=" << endl;
           
                cout << "Enter your answer";
                cin >> ans;
                while (ans != v1 - v2) {
                    cout << "Wrong answer, try again!" << endl;
                    cout << "Enter your answer";
                    cin >> ans;
                }
                cout << "Very good" << endl;
                count++;
            break;

                    //Calculations for multiplcation
        case 3:     cout << count << ". " << v1 << "*" << v2 << "=" << endl;
            
                cout << "Enter your answer";
                cin >> ans;
                while (ans != v1 * v2) {
                    cout << "Wrong answer, try again!" << endl;
                    cout << "Enter your answer";
                    cin >> ans;
                }
                cout << "Very good" << endl;
                count++;           
            break;

            //Calculations using mixed operators
        case 4:
            //generating numbers from 1 to 3 to select operator randomly for mixed problems
            int sign = (rand() % 4) +1;

            if (sign == 1) {
                cout << count << ". " << v1 << "+" << v2 << "= " << endl;
                
                    cout << "Enter your answer";
                    cin >> ans;
                    while (ans != v1 + v2) {
                        cout << "Wrong answer, try again!" << endl;
                        cout << "Enter your answer";
                        cin >> ans;
                    }
                    cout << "Very good" << endl;
                    count++;
            }
            if (sign == 2) {
                cout << count << ". " << v1 << "-" << v2 << "= " << endl;
                
                    cout << "Enter your answer";
                    cin >> ans;
                    while (ans != v1 - v2) {
                        cout << "Wrong answer, try again!" << endl;
                        cout << "Enter your answer";
                        cin >> ans;
                    }
                    cout << "Very good" << endl;
                    count++;
                
            }
            if (sign == 3) {
                cout << count << ". " << v1 << "*" << v2 << "= " << endl;
                
                    cout << "Enter your answer";
                    cin >> ans;
                    while (ans != v1 * v2) {
                        cout << "Wrong answer, try again!" << endl;
                        cout << "Enter your answer";
                        cin >> ans;
                    }
                    cout << "Very good" << endl;
                    count++;
                
            }
            break;
        }
    }
}

//Functions for doing test
void doTest(int choice) {
    int ans, v1, v2;
    int count = 1;    //it will count number of questions
    int num = 0;     //num will count number of right answers
    cout << "Now you have to do 15 questions" << endl;

    //Loop until 15 questions are done
    while (count != 16) {
        v1 = randomValue1();
        v2 = randomValue2();
        switch (choice) {
            //Test for addition
        case 1:
            cout << count << ". " << v1 << "+" << v2 << "=" << endl;
            cout << "Enter your answer";
            cin >> ans;
            if (ans == v1 + v2) {
                num++;       //num will increase by 1 if answer is right
            }
            break;

            //Test for subtraction
        case 2:
            cout << count << ". " << v1 << "-" << v2 << "=" << endl;
            cout << "Enter your answer";
            cin >> ans;
            if (ans == v1 - v2) {
                num++;
            }
            break;

            //Test for multiplcation
        case 3:
            cout << count << ". " << v1 << "*" << v2 << "=" << endl;
            cout << "Enter your answer";
            cin >> ans;
            if (ans == v1 * v2) {
                num++;
            }
            break;

            //Test for mixed questions
        case 4:
            int sign = (rand() % 4) + 1;

            if (sign == 1) {
                cout << count << ". " << v1 << "+" << v2 << "= " << endl;
                cout << "Enter your answer";
                cin >> ans;
                if (ans == v1 + v2) {
                    num++;
                }
            }
            if (sign == 2) {
                cout << count << ". " << v1 << "-" << v2 << "= " << endl;
                cout << "Enter your answer";
                cin >> ans;
                if (ans == v1 - v2) {
                    num++;
                }
            }
            if (sign == 3) {
                cout << count << ". " << v1 << "*" << v2 << "= " << endl;
                cout << "Enter your answer";
                cin >> ans;
                if (ans == v1 * v2) {
                    num++;
                }
            }
        }
        count++;
    }
    cout << "You have done " << (count - 1) << " questions, from which you have "
        << num << " right answers." << endl;
}
