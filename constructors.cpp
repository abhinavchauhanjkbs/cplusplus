#include<iostream>
using namespace std;
class Example 
{
    int a,b;
public:
    Example()
    {
        a = 90;
        b = 270;
     cout << "\nIm Constructor";
    }
    Example(int x, int y)
    {
        a = x;
        b = y;
        cout << "\nIm Constructor";
    }
    void Display() 
    {
        cout << "\nValues :"<< a << "\t" << b;
    }
};
int main()
{
Example Object(18, 99); 
Example Object2; 
Object.Display();
Object2.Display();
}
