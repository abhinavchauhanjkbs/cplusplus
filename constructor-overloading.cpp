#include<iostream>
using namespace std;
class Line
{
    public:
       int getLength(); //simple constructor
       Line(int len); // copy constructor
       Line(const Line &obj); // destructor
       ~Line();
       void display()
       {
        cout<<"Length of Line:"<<length<<endl;
       }
    private:
       int length;
};
Line::Line(int len) {
cout << "Normal constructor allocating ptr" << endl; 
length= len;
}
Line::Line(const Line &obj) {
cout << "Copy constructor allocating ptr." << endl; 
length=obj.length; // copy the value
}
Line::~Line()
{
    cout << "Freeing memory!" << endl;
  }
// Main function for the program
int main() 
{
  Line line(10),line1(line);
   line.display();
line1.display();
}
