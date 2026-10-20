#include <iostream>
using namespace std;

class Bucket
{
public:
    int volume;
    int used;

    Bucket(int v, int u)
    {
        volume = v;
        used = u;
    }

    void flush()
    {
        used = 0;
    }

    int fill(int v)
    {
        int freeVolume = volume - used;

        if (v <= freeVolume)
        {
            used = used + v;
            return 0;
        }
        else
        {
            used = volume;
            return v - freeVolume;
        }
    }
};

int main()
{
    Bucket test_01(12, 3);

    cout << "1) " << test_01.volume << ", " << test_01.used << endl;

    int rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << endl;

    test_01.flush();

    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << endl;

    return 0;
}
