#include <iostream>
using namespace std;
class cordinate
{
    int x, y;

public:
    void get()
    {
        cout << "Enter x and y co-ordinate :" << endl;
        cin >> x >> y;
    }
    void show()
    {
        cout << "  x :" << x << " and y :" << y << endl;
    }
    friend cordinate sum(cordinate, cordinate);
};
cordinate sum(cordinate c1, cordinate c2)
{
    cordinate z;
    z.x = c1.x + c2.x;
    z.y = c1.y + c2.y;
    return z;
};
int main()
{
    cordinate i, j, k;
    cout << "=========================================\n";
    i.get();
    j.get();
    k = sum(i, j);
    i.show();
    j.show();
    k.show();
    cout << "\n=========================================\n";
    return 0;
}