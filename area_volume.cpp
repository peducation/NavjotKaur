//This program is about calculating area an volume using class
// Created by Navjot Kaur
//
//Declaration of class and member functions outside the class
#include <iostream>
using namespace std;
#include "area_volume.h"

void areaVolume::setdata(int len, int br, int hei){
    len = length;
    br = breadth;
    hei = height;
}

void areaVolume::getdata1(){
    cout <<"Enter length: ";
    cin >>length;
    cout <<"Enter breadth: ";
    cin >>breadth;
}

void areaVolume::getdata2(){
    cout <<"Enter length: ";
    cin >>length;
    cout <<"Enter breadth: ";
    cin >>breadth;
    cout <<"Enter height: ";
    cin >>height;
}

int areaVolume:: area(){
    return length*breadth;
}

int areaVolume:: volume1(){
    return length*breadth*height;
}
