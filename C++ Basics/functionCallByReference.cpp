// function call by reference 

#include<iostream>
using namespace std;
class swapping 
{
     private : int x, y;
     public  : void enter ()
     {
        cout<<"Enter two numbers :"<<endl;
        cin>>x>>y;
        cout<<"Before swapping a :" <<x<<  " and b :"<< y << endl;
        swap (& x, &y);       // passing arguments by reference 
        cout<<"After swapping a : "<<x<<" and b : "<< y<< endl;


     }
     void swap ( int *a, int *b)     
     {
        int t;
        t = *a;
        *a = *b;
        *b = t;
     }
};
  
 int main ()
{
    swapping s;
    s.enter();
    return 0;
}