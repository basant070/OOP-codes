// program that can add two times given in the form of hours and minutes
// to illustrates the concepts of passing objects to the functions
// as a arguments

#include <iostream>
using namespace std;
class time
{
private:
    int hours, minutes;

public:
    void get_time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void display()
    {
        cout << hours << "hours and ";
        cout << minutes << " minutes" << endl;
    }
    void sum(time, time); // function which will take object as arguments
};

void time ::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    time T1, T2, T3;
    T1.get_time(8, 50);
    T2.get_time(4, 47);
    T3.sum(T1, T2); // passing objects as arguments
    T3.display();
    return 0;
}