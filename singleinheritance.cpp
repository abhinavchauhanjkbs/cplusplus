#include<iostream>
using namespace std;
//Base class
class shape
{ public:
void setwidth(int w)
{ width=w;
}
void setheight(int h)
{height=h;
}
protected:
int width;
int height;
};
//Derived class
class Rectangle:public shape
{
public:
int getArea()
{return(width * height);
}
};
int main()
{
Rectangle rect;
rect.setwidth(5);
rect.setheight(7);
//print the area of the object.
cout<<"Total area:"<<rect.getArea()<<endl;
}
