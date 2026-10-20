#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    string digits[10] = {
        "ноль", "один", "два", "три", "четыре",
        "пять", "шесть", "семь", "восемь", "девять"
    };

    int number;

    cout << "Введите цифру от 0 до 9: ";
    cin >> number;

    if (number >= 0 && number <= 9)
    {
        cout << digits[number] << endl;
    }
    else
    {
        cout << "Нужно ввести цифру от 0 до 9" << endl;
    }
    return 0;
}
