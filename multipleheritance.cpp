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
int main()
{
    Rectangle Rect;
int area;
Rect.setwidth(5);
Rect.setheight(7);
area=Rect.getarea();
//print the area of the object
cout<<"Total area"<<Rect.getarea()<<endl;
//print the total cost of painting
cout<<"total paint cost:$"<<Rect.getCost(area)<<endl;
}