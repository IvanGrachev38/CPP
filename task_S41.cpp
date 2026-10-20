#include <iostream>
using namespace std;

double squared_sum(double a, double b)
{
    return (a + b) * (a + b);
}

int main()
{
    setlocale(0, "Russian");
    int a, b;

    cout << "¬ведите два целых числа: ";
    cin >> a >> b;

    cout << squared_sum(a, b) << endl;
    cout << squared_sum(a, -b) << endl;

    return 0;
}
