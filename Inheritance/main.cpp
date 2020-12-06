/* --------------------------------------------------------------------------------------
 * File name:              main.cpp
 * Folder name:            Inheritance
 * Wriiten by:             Navjot Kaur
 * Description:            Introduction of inheritance(How to drive a subclass from base class
 -------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

//Base class
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
    int getValues(){
        return length*breadth*height;
    }
};


//Subclass derived from base class
class Solid: public Shape{
public:
    //Calculate area of solid using length, breadth and height defines in base class
    int getArea(){
        return length*breadth*height;
    }
};

//Main function
int main() {
    Solid solid;
    solid.setValues(2,3,4); //Set values of length, breadth and height
    cout <<"The another area is: "<<solid.getValues() <<endl;
    cout <<"The area of solid is: "<<solid.getArea() <<endl;
    return 0;
}
