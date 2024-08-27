#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    A(int x)
    {
        this->x = x;
    }
    friend void get_max(A o1, B o2);
};
class B
{
    int y;

public:
    B(int y)
    {
        this->y = y;
    }
    friend void get_max(A o1, B o2);
};

void get_max(A o1, B o2)
{
    int max = 0;
    if (o1.x > o2.y)
    {
        max = o1.x;
        cout << "A is maximum" << endl;
    }
    else
    {
        max = o2.y;
        cout << "B is maximum" << endl;
    }
}
int main()
{
    A a(30);
    B b(20);
    get_max(a, b);
    return 0;
}
