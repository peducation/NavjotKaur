/* --------------------------------------------------------------------------------------
 * File name:              main.cpp
 * Folder name:            Inheritance
 * Wriiten by:             Navjot Kaur
 * Description:            Multiple subclasses derived from base class
 -------------------------------------------------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1423;

//Base class
class Shape{
protected:
    //define variables
    double radius;
    double height;
public:
    //Constructor without arguments
    Shape(){
        cout <<"Constructor is created"<<endl;
    }

    void setRadius(double r){
        radius = r;
    }
    void setHeight(double h){
        height = h;
    }

    //Get value of radius from user
    double getRadius(){
        cout <<"Enter radius: "; cin>>radius;
    }

    //get value of height from user
    void getHeight(){
        cout <<"Enter height"; cin >>height;
    }
};

//First subclass
class Sphere: public Shape{
public:

    //Calculate volume
    double getVolume_Sphere(){
        return  4*PI*pow(radius, 3)/3;
    }

    //Calculate area
    double getArea_Sphere(){
        return 4*PI*radius*radius;
    }
};

//Second subclass
class Cone: public Sphere{
public:
    double getVolume_Cone(){
        return (PI*pow(radius, 2)*height)/3;
    }
};

class Circle: public Cone{
public:
    double getArea_Circle(){
        return PI*pow(radius, 2);
    }
};

//Main function
int main(){
    Circle circle;   //define objects

    //Calling to functions using class object
    circle.getRadius();
    circle.getHeight();

    //get volumes and areas of sphere and cone using class object
    cout <<"The volume of Sphere is: "<<circle.getVolume_Sphere() <<endl;
    cout <<"The area of Sphere is: "<<circle.getArea_Sphere() <<endl;
    cout <<"The volume of Sphere is: "<<circle.getVolume_Cone() <<endl;
    cout <<"The volume of Sphere is: "<<circle.getArea_Circle() <<endl;


    //define another object for another calculation
    Circle circle2;
    circle2.setRadius(2);
    circle2.setHeight(3);

    cout <<"The volume of Sphere is: "<<circle2.getVolume_Sphere() <<endl;
    cout <<"The area of Sphere is: "<<circle2.getArea_Sphere() <<endl;
    cout <<"The volume of Sphere is: "<<circle2.getVolume_Cone() <<endl;
    cout <<"The volume of Sphere is: "<<circle2.getArea_Circle() <<endl;

    return 0;
}