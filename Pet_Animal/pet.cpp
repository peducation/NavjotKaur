/*---------------------------------------------------------------------------------------
*File Name:    pet.cpp(This file contains the Source file)
*Description:  To create class for pet which takes input of name, age and gender
               from the user and then display the outputs on screen.
*Written by:   Navjot Kaur
*Date:         2020-12-07
--------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include <limits>
#include "pet.h"
using namespace std;

//declaration of member functions of class Pet

//member function to set values
void Pet::setValues(string N, int A, bool G, int ii) {
    N = name;
    A = age;
    isFemale = G;
    ii = i;
}

//member function to check Name of pet is string or not
 bool Pet::checkString(string str) {
    for (int i = 0; i < str.size(); i++)
        if (isdigit(str[i]) == false)
            return false;
       
            return true;
}

//member function to get Name of pet
void Pet::getName() {
    do {
        cout << "Enter name: ";
        cin >> name;
        if (checkString(name))
            cout << name << " is an integer, it must be string" << endl;
    } while (checkString(name));
}

//member function to get age of pet
void Pet::getAge() {
    cout << "Age : ";
    cin >> age;
    //To check that age must be a number
    while (1) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Not in letters, try again " << endl;
            cin >> age;
        }
        //it will take input value without any fail if it is a number 
        if (!cin.fail()) {
            break;
        }
    }

}

//Member function to get gender of pet
void Pet::getGender() {
    do {
        cout << "Is your dog female(y/n): ";
        cin >> answer;
        if (answer == 'y') {
            isFemale = true;
        }
        else if (answer == 'n') {
            isFemale = false;
        } 
        //if user type another keywod than y or n, it will give message and ask to enter right choice
        if (answer != 'y' && answer != 'n') {
            cout << "Wrong answer! It must be yes or no." << endl;
        }
    } while (answer != 'y' && answer != 'n');
    

}

//member function which take user defined values
void Pet::getValues() {
    getName();
    getAge();
    getGender();
}

//Member function to display all values taken from user
void Pet::display() {
    cout << "Name:  " << name << endl;
    cout << "Age:  " << age << endl;
    if (isFemale == true) {
        cout << name << " is a nice female dog" << endl;
    }
    if(isFemale  == false) {
        cout << name << " is a nice male dog" << endl;
    }
    

}