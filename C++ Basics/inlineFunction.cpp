#include<iostream>
using namespace std;
inline int sum (int x, int y)
{
    int z = x + y;
    return z;
}
int main ()
{
    int a, b, d ;
    cout<<"Enter two numbers :"<<endl;
    cin>> a>> b;
    d = sum ( a, b);
    cout<<"Addition = "<< d;
    return 0;
}