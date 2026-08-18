// it is a function which is not the member of a class but has full access to
// private , public as well as protected members of that class
#include <iostream>
using namespace std;
class vector
{
    int a[10];
    float avg;

public:
    void getData();
    friend void average(vector);
};
void vector ::getData()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
}
void average(vector v)
{
    float sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += v.a[i];
    }
    v.avg = sum / 10;
    cout << "Average :" << v.avg << endl;
}
int main()
{
    vector obj;
    cout << "Enter 10 integer :";
    obj.getData();
    average(obj);
    return 0;
}