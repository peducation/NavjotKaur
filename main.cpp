//This program is about calculating area an volume using class
//Created by Navjot Kaur
//
#include <iostream>
using namespace std;
#include "area_volume.h"

int main() {
    areaVolume area1, volume1; //defining objects

    area1.getdata1();
    cout <<"Area is: " <<area1.area() <<endl;

    volume1.getdata2();
    cout <<"Volume is: " <<volume1.volume1() <<endl;

    return 0;
}
