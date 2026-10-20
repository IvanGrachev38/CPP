#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    int A, B;

    cout << "Введите числа A и B (B > A): ";
    cin >> A >> B;

    ofstream file("output");

    if (file.is_open())
    {
        for (int i = A; i <= B; i++)
        {
            file << i * 3 << endl;
        }

        file.close();
        cout << "Данные записаны в файл output" << endl;
    }
    else
    {
        cout << "Не удалось открыть файл" << endl;
    }
    return 0;
}
