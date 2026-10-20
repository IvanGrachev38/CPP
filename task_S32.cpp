#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    char str[100];

    cout << "¬ведите строку: ";
    cin.getline(str, 100);

    int length = strlen(str);

    if (length > 1)
    {
        char first = str[0];

        for (int i = 0; i < length - 1; i++)
        {
            str[i] = str[i + 1];
        }

        str[length - 1] = first;
    }
    cout << str << endl;
    return 0;
}
