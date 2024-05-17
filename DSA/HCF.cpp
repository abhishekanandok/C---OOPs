#include <iostream>
using namespace std;

int calcGCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << calcGCD(a, b);
    return 0;
}