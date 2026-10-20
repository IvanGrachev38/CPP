#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int a, b;
    cout << "Введите два целых числа, через пробел: ";
    cin >> a >> b;
    if (b != 0)
    {
        cout << "Деление нацело: " << a / b << endl;
        cout << "Остаток от деления: " << a % b << endl;
    }
    else
    {
        cout << "На ноль делить нельзя" << endl;
    }
    return 0;
}
