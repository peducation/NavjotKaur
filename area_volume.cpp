//
// Created by jotin on 2020-11-10.
//
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
