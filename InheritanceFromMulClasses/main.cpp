/*---------------------------------------------------------------------------------------------
 * File name:     main.cpp
 * Folder name:   InheritanceFromMulcasses
 * Written by:    Navjot Kaur
 * Description:   Subclass derived from another multiple classes
 *
 * ---------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

//Basic Class
class Shape{
protected:
    int length;
    int breadth;
    int height;
public:
    void setValues(int l, int b, int h){
        length = l;
        breadth = b;
        height = h;
    }

    //Return value after calculations
    int getValues(){
        return length*breadth*height;
    }
};

//Class to claculate cost of paint
class PaintCost{
public:
    int getCost(int area){
        return area*70;
    }
};

//Subclass derived from another two classes
class Solid: public Shape, public PaintCost{
public:
    int getArea(){
        return length*breadth*height;
    }
};


//Main function
int main() {

    //define object
    Solid solid;
    int area;

    solid.setValues(2,3,4);
    area = solid.getArea();
    cout <<"The area of solid is: "<<solid.getArea() <<endl;
    cout <<"The cost of paint is: "<<solid.getCost(area)<<endl;
    return 0;
}

