//
// Created by jotin on 2020-11-10.
//

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
    int area(){
        return length*breadth;
    }
    int volume(){
        return length*breadth*height;
    }

};

#endif //NAVJOTKAUR_AREA_VOLUME_H
