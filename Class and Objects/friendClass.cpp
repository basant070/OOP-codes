// Friend Class : Entire class can be declared as a friend class and it can access all the members of the class
#include <iostream>
using namespace std;
class B;
class A
{
    int x, y;

public:
    void enter()
    {
        cout << "Enter two integer values :";
        cin >> x >> y;
    }
    friend class B;
};
class B
{
private:
public:
    void display(A l)
    {
        cout << " x :" << l.x << endl;
        cout << " y :" << l.y << endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    obj1.enter();
    obj2.display(obj1);
    return 0;
}
