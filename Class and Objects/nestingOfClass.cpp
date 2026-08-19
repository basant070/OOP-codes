#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    char name[10];

public:
    void get()
    {
        cout << "Enter roll no :";
        cin >> roll;
        cout << "\nEnter  name :";
        cin >> name;
    }
    void display()
    {
        cout << "\n Your Roll no is " << roll << " and you are " << name << endl;
    }
    class dob
    {
    private:
        int day, month, year;

    public:
        void getDate();
        void showData();
    };
};
void student ::dob ::getDate()
{
    cout << "Enter your date of birth :" << endl;
    cout << " Day :";
    cin >> day;
    cout << "\nMonth :";
    cin >> month;
    cout << "\nYear :";
    cin >> year;
}
void student ::dob ::showData()
{
    cout << " DOB : " << year << "/" << month << "/" << day;
}
int main()
{
    student s;
    student ::dob d;
    cout << "=========================================\n";
    s.get();
    d.getDate();
    s.display();
    d.showData();
    cout << "\n=========================================";
    return 0;
}