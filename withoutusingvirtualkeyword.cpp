#include<iostream>
using namespace std;
class Base
{
    public:
     void show()
    {
        cout<<"Base class\n";
    }
};
class Derived : public Base
{
   public:
 void show()
     {
      cout<<"Derived class\n";  
    }
};
int main()
{
    Base *b;  //Base class pointer
    Derived d; //Derived class object
    b=&d;
    b->show(); //Early binding occurs
} 