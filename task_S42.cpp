#include <iostream>
using namespace std;

void sort(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};

    sort(a);

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}
