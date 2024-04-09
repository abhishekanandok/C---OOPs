#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // declaring an object of the type ifstream
    ifstream anand;
    // declaring string variable st
    string st;
    // opening the text file into anand
    anand.open("abhi.txt");

    // giving output the string lines by storing anand st until the file reaches the end of it
    while (anand.eof() == 0)
    {
        // using getline to fill the whole line anand st
        getline(anand, st);
        cout << st << endl;
    }
    anand.close();
    return 0;
}
