#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test
{
    int a; //a must be initialezed first ---> Red flag error
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(j+i)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i+b)   ---> Red flag this will create problem because a will be initialized first
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test anand(4, 6);

    return 0;
}
