/*----------------------------------------------------------------------------------------
File Name:      Source.cpp (This file contains the source file)
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

//Declaration of class member functions

//Set values defined in private secion of class
void Account::setValues(double b, double d, double w, int c) {
    b = balance;
    d = dep;
    w = withd;
    c = ch;
}

//member function to get choice of user what he/she want to do
void Account::getOptions() {
    cout << "Enter 1 to deposit money, 2 to withdraw money and 3 to leave ";
    cin >> ch;
    switch (ch) {
    case 1:
        //if user want to deposit money it will call function for depositing money and display balance
        cout << "You want to enter some money in." << endl;
        deposit();
        display();
        break;
    case 2:
        //if user want to take out money, it call function to withdraw money and dispaly balance
        cout << "You want to withdraw the money." << endl;
        withdraw();
        display();
        break;
    case 3:
        //if user want to leave
        cout << "Bye bye" << endl;
        break;
    default:
        cout << "What do you mean by this number?" << endl;
    }
}

//member function to write balance into file
void Account::bankBalanceIn(double balance) {

    ofstream myfile;
    myfile.open("balance.txt");

    //To check file is present or not
    try {
        if (myfile) {
            myfile << balance;   //write balance amount to file
        }
    }
    catch (...) {
        cout << "File is not present" << endl;
    }
    myfile.close();
}

//member function to take balance form file
double Account::bankBalanceOut(double balance) {
  
    ifstream myfile;

    //To check file is present or not
    myfile.open("balance.txt");
    try {
        if (myfile) {
            myfile >> balance;  //Take balance amount from file
        }
    }
    catch (...) {
        cout << "File is not present" << endl;
    }
    myfile.close();
    return balance;
}


//member function to deposit money to account
void Account::deposit() {
    balance = bankBalanceOut(balance);
    cout << "How much money would do you like to add?" << endl;
    cin >> dep;
    try {
        if (dep > 0.0) {
            balance = balance + dep;   //Balance in account after deposition
            bankBalanceIn(balance);
        }
        else {
            throw 505;
        }
    }
    catch(...) {
        cout << "This is inappropriate amount to be add in to your account" << endl;
    }
}

//member function to withdraw money from account
void Account::withdraw() {
    balance = bankBalanceOut(balance);
    cout << "How much money do you want to take out?" << endl;
    cin >> withd;
    try {
        //withdraw money should not be more than balance
        if (withd > balance) {
            cout << "Unfortunately, your account has no much balance to withdraw!" << endl;
        }
        else {
            throw 505;
        }
    }
    catch(...) {
        balance = balance - withd;  //balance after withdrawing money
        bankBalanceIn(balance);
    }
}

//member function to display account balance
void Account::display() {
    cout << "Now your account balance is " << balance << endl;
}

