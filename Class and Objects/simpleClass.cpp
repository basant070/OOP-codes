#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    float marks;
    char name[20];

public:
    void input();
    void enter()
    {
        cout << "Enter Name :" << endl;
        cin >> name;
        cout << "Enter Roll No:" << endl;
        cin >> roll;
        cout << "Enter marks :" << endl;
        cin >> marks;
    };
    void display()
    {
        cout << name << " of roll number " << roll << " has got " << marks << " marks in physics !" << endl;
    }
};
void student ::input()
{
    cout << "Thank you !";
}

int main()
{
    student s1, s2;
    s1.enter();
    s1.display();
    s2.enter();
    s2.display();
    s2.input();
    return 0;
}