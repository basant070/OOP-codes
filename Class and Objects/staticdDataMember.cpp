/*
definition/properties of static data

The data members which is globally shared by all objects
of that class is called static data
- only one copy of static data is created for one class and shared by all objects of that class.
- by default it is intilalized zero when the first object is created .
// declaration : static int x;
// definition :  int student :: x = 7;

 */

#include <iostream>
using namespace std;
class item
{
    static int count;

private:
    float price;

public:
    void getData(float a)
    {
        price = a;
        count++;
    }
    void showCount()
    {
        cout << "count = " << count << endl;
    }
};
int item ::count;
int main()
{
    item i1, i2, i3;

    i1.showCount();
    i2.showCount();
    i3.showCount();
    i2.getData(13.2);
    i3.getData(14.2);
    i1.getData(15.2);
    cout << "After reading data :" << endl;
    i1.showCount();
    i2.showCount();
    i3.showCount();
    return 0;
}