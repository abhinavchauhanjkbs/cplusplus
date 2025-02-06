#include<iostream>
using namespace std;
//declare a class
class Area
{
    private:
    double base;
    double height;
    public:
    //parameterized construcor to initialize vars
    Area(double b,double hgt)
{
    base=b;
    height=hgt;
}
Area()
{
   base=0;
   height=0;
}
Area(Area & obj)
{
    base=obj.base;
    height=obj.height;
}
    double calcArea()
{
    return ((base*height)/2);
}
};
int main()
{
Area Area1(6,10);
Area Area2(0,0);
Area Area3=Area1;
cout<<"Area of triangle : "<<Area1.calcArea()<<endl;
cout<<"Area of triangle : "<<Area2.calcArea()<<endl;
cout<<"Area of triangle : "<<Area3.calcArea();
return 0;
}
