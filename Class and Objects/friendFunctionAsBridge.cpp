#include <iostream>
using namespace std;
class mango;
class apple
{
private:
    int x;

public:
    void getData1()
    {
        cout << "Enter the value of x:" << endl;
        cin >> x;
    }
    friend void add(apple, mango);
};
class mango
{
private:
    int y;

public:
    void getData2()
    {
        cout << "Enter y:" << endl;
        cin >> y;
    }
    friend void add(apple, mango);
};
void add(apple a, mango m)
{
    int sum = a.x + m.y;
    cout << "sum is :" << sum << endl;
};
int main()
{
    cout << "=========================================\n";
    apple obj1;
    mango obj2;
    obj1.getData1();
    obj2.getData2();
    add(obj1, obj2);
    cout << "=========================================";

    return 0;
}