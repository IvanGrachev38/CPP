#include <iostream>
using namespace std;

void print(int a)
{
    cout << a << endl;
}

void print(float a)
{
    cout << a << endl;
}

void print(char a)
{
    cout << a << endl;
}

void print(int a, int b)
{
    cout << a << ", " << b << endl;
}

int main()
{
    print(10);
    print(3.5f);
    print('A');
    print(5, 7);

    return 0;
}
