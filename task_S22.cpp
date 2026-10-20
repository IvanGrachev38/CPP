#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    ifstream file("output");
    int number;
    int n = 1;

    if (file.is_open())
    {
        while (file >> number)
        {
            cout << n << ". " << number << endl;
            n++;
        }

        file.close();
    }
    else
    {
        cout << "Не удалось открыть файл output" << endl;
    }
    return 0;
}
