#include <iostream>
using namespace std;

// Overloading Template Functions in C++
void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    func(4); // Exact match takes the highest priority
    return 0;
}
