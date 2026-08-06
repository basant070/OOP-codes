#include<iostream>
using namespace std;
int &max (int &x, int &y)
{
    if (x > y)
    return x;
    else
    return y;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    cout<<"\nBefore calling function a = "<<a<<" and b ="<<b<<endl;
    max(a,b) = 50;
    cout<<"After calling function a = "<<a<< " and b = "<<b<<endl;

    return 0;
}
