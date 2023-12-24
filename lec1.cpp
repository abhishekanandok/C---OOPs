// There are two types of header files:
// 1. System header files: It comes with the compiler
#include <iostream>

// 2. User defined header files: It is written by the programmer
#include "this.h"

using namespace std;

int main()
{
    cout << "Abhishek Anand :-)" << endl; // \n & <<endl used to enter new line
    cout << "Abhishek Anand :-) \n";
    cout << "Abhishek Anand :-)" << '\n';

    // print 1 to n
    int n;
    cin >> n; // ye space,tab(\t),enter(\n) read nahi karega

    int i = 1;

    while (i <= n)
    {
        cout << i << endl;
        i = i + 1;
    }

    return 0;
}