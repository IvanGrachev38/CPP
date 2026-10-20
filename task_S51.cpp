#include <iostream>
#include <cstring>
using namespace std;

void reverse(char str[])
{
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    cout << endl;
}

int main()
{
    setlocale(0, "Russian");
    char str[100];

    cout << "¬ведите строку: ";
    cin.getline(str, 100);

    reverse(str);

    return 0;
}
