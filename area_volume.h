//This program is about calculating area an volume using class
// Created by Navjot Kaur
//
//Defining class and its member functions

#ifndef NAVJOTKAUR_AREA_VOLUME_H
#define NAVJOTKAUR_AREA_VOLUME_H

class areaVolume{
private:
    int length;
    int breadth;
    int height;
public:
    void setdata(int len, int br, int hei);
    void getdata1();
    void getdata2();
    int area();
    int volume1();

};

#endif //NAVJOTKAUR_AREA_VOLUME_H
