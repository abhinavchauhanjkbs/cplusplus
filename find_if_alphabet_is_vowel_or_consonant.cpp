#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter any alphabet";
    cin>>c;
    switch(c)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout<<"the alphabet is a vowel";
        break;
        default:cout<<"alphabet is a consonant";
    }
    return 0;
}
    