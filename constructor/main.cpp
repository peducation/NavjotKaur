#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1423;

class Shape{
private:
    double radius;
    double height;
public:
    Shape(){
        cout <<"Constructor is created"<<endl;
    }

    void setRadius(double r){
        radius = r;
    }
    void setHeight(double h){
        height = h;
    }
    double getRadius(){
       cout <<radius;
    }
    void getHeight(){
        cout <<height;
    }
};

class Sphere: public Shape{
public:
    double getVolume_Sphere(double radius){
        return  4*PI*pow(radius, 3)/3;
    }
    double getArea_Sphere(double radius){
        return 4*PI*radius*radius;
    }
};

class Cone: public Sphere{
public:
    double getVolume_Cone(double radius, double height){
        return (PI*pow(radius, 2)*height)/3;
    }
};

class Circle: public Cone{
public:
    double getArea_Circle(double radius){
        return PI*pow(radius, 2);
    }
};

int main(){
   Circle circle;
   //circle.setRadius(2);
   //circle.setHeight(3);
   cout <<"The volume of Sphere is: "<<circle.getVolume_Sphere(2) <<endl;
    cout <<"The area of Sphere is: "<<circle.getArea_Sphere(2) <<endl;
    cout <<"The volume of Sphere is: "<<circle.getVolume_Cone(2, 3) <<endl;
    cout <<"The volume of Sphere is: "<<circle.getArea_Circle(2) <<endl;

    return 0;
}