#include<iostream>
using namespace std;
int sum ( int x, int y)
{
    int d= x+y;
    return d;
}
int main ()
{
    int a, b, add;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    add =sum (a, b); // called by passing value 
    cout<<"\n Sum is :"<<add;
    return 0;
}