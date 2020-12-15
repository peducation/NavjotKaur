/* ------------------------------------------------------------------ --------------------
*File Name :       Pet_Animal.cpp(This file contains the Main file) 
* Description :    To create class for pet which takes input of name, age and gender
                   from the user and then display the outputs on screen.
* Written by :     Navjot Kaur
* Date :           2020 - 12 - 07
-------------------------------------------------------------------- --------------------- */
#include <iostream>
#include <string>
#include "pet.h"
using namespace std;

//Main function
int main() {

    cout << "Welcome" << endl;
    //define object of class Pet
    Pet pet1;

    //Calling to member functions using class object to take values from user
    pet1.getValues();
    cout << "===================================================" << endl;

    //Calling to member functions using class object to display values on screen
    pet1.display();
    cout << "===================================================" << endl;

    return 0;
}