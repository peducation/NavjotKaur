/*-----------------------------------------------------------------------------------
*File Name:    pet.h(This file contains the header file)
*Description:  To create class for pet which takes input of name, age and gender
               from the user and then display the outputs on screen.
*Written by:   Navjot Kaur
*Date:         2020-12-07
------------------------------------------------------------------------------------*/

#ifndef PETANIMAL_PET_H
#define PETANIMAL_PET_H
using namespace std;

//Defination of class and its member functions
class Pet
{
    //define variables privately
private:
    string name;
    int age;
    bool isFemale;
    char answer;
    int i;

    //defining all member functions publicaly
public:
    void setValues(string N, int A, bool G, int ii);
    bool checkString(string name);
    void getName();
    void getAge();
    void getGender();
    void getValues();
    void display();
};

#endif //PETANIMAL_PET_H

