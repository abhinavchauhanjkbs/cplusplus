#include<iostream>
using namespace std;
class shape
{ public:
void setwidth(int w)
{width=w;
}
void setheight(int h)
{ height=h;
}
protected:
int width;
int height;
};
//base class paintcost
class paintCost
{ public:
int getCost(int area)
{return area*70;
}
};
//Derived class
class Rectangle:public shape,public paintCost
{public:
int getarea() 
{return(width*height);
}
};
class Perimeter:public Rectangle
{public:
int getPerimeter() 
{return(2*(width+height));
}
};
int main()
{
    Perimeter Peri;
int area;
Peri.setwidth(5);
Peri.setheight(10);
area=Peri.getarea();
//print the area of the object
cout<<"Total area"<<Peri.getarea()<<endl;
//print the total cost of painting
cout<<"total paint cost:$"<<Peri.getCost(area)<<endl;
cout<<"perimeter"<<Peri.getPerimeter()<<endl;
}