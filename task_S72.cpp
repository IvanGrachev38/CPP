#include <iostream>
using namespace std;

class CreditCard
{
public:
    int Number;
    float Balance;

    CreditCard(int number, float balance)
    {
        Number = number;
        Balance = balance;
    }
    void Put(float v)
    {
        Balance = Balance + v;
    }
    void Take(float v)
    {
        if (v <= Balance)
        {
            Balance = Balance - v;
        }
        else
        {
            cout << "Недостаточно денег" << endl;
        }
    }
};
int main()
{
    setlocale(0, "Russian");
    CreditCard firstCC(1234, 50);
    CreditCard *p = &firstCC;

    cout << "Номер карты: " << p->Number << endl;
    cout << "Баланс: " << p->Balance << endl;

    p->Put(20);
    cout << "После пополнения: " << p->Balance << endl;

    p->Take(10);
    cout << "После снятия: " << p->Balance << endl;

    return 0;
}
