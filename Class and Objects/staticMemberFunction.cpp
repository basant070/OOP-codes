
// member function which can access only static members (data/ function) of the same class
#include <iostream>
using namespace std;
class BCTE
{
    static int count;

private:
    int code;

public:
    void setCode()
    {
        count++;
        code = count;
    }
    void showCode()
    {
        cout << "student code " << code << "BCTE//077" << endl;
    }
    static void showCount()
    {
        cout << "Records of " << count << " students found " << endl;
    }
};
int BCTE ::count;
int main()
{
    BCTE C1, C2;
    C1.setCode();
    C2.setCode();
    BCTE::showCount(); // static function called
    BCTE C3;           // obj creation
    C3.setCode();
    BCTE ::showCount();
    C1.showCode();
    C2.showCode();
    C3.showCode();
    return 0;
}
