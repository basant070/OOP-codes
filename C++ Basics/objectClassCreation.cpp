//Class and Object creation 

#include<iostream>
using namespace std ;
class Student{    // class declaration and definition 
    private :
           int roll_no;
           char name [20];
    public:
         void enter()
         {
            cout<<"Enter your name :"<<endl;
            cin>>name;
            cout<<"Enter you roll no :"<<endl;
            cin >> roll_no;
         }
         void display()
         {
            cout<<"NAME :"<<name<<endl;
            cout<<"ROLL NO :"<<roll_no<<endl;
         }
};
int main ()
{
    Student S; // object creation 
    S.enter();
    S.display();
    return 0;
}