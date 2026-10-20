#include <iostream>
#include <cmath>
using namespace std;

double get_square(double A, int N)
{
    if (A <= 0 || N < 3)
    {
        return 0;
    }

    const double PI = 3.141592653589793;
    return (N * A * A) / (4 * tan(PI / N));
}

int main()
{
    setlocale(0, "Russian");
    double A;
    int N;

    cout << "Введите сторону A и число сторон N: ";
    cin >> A >> N;

    if (A <= 0 || N < 3)
    {
        cout << "Неверные данные" << endl;
    }
    else
    {
        cout << "Площадь: " << get_square(A, N) << endl;
    }

    return 0;
}
