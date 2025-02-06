#include<iostream>
using namespace std;
class Box
{
    double width;
    public:
    friend void printWidth(Box box);
    void setWidth(double wid);
};
//member function definition
void Box::setWidth(double wid)
{
    width=wid;
}
// note : print width is not member function of any class.
void printWidth(Box box)
{
    cout<<"width of box :"<<box.width<<endl;
}
//Main function for the program
int main()
{
    Box box;
    //set box width with member function
    box.setWidth(10.0);
    //use friend function to print the width
    printWidth(box);
    return 0;
}