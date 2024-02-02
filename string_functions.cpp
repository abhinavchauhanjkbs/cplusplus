#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    cout<<"\nthe length of ayushi is ";
    cout<<strlen("ayushi");
    char a[20];
    strcpy(a,"ayushi");
    cout<<endl<<strlen(a);
    cout<<endl<<a;

    strcat(a," here");
    cout<<endl<<"after concat "<<a;

    cout<<endl<<"strcmp "<<strcmp(a,"ayushi here");
    if(strcmp(a,"ayushi here")>0)
    cout<<"first one is greater";
    else if(strcmp(a,"ayushi here")<0)
    cout<<"second one is greater";
    else
     cout<<" \nboth strings are equal";
     return 0;
}

