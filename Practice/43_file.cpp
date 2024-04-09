#include <iostream>
#include <string> //getline ke liye
#include <fstream> //file ke liye

using namespace std;

int main()
{
    string st = "Anand bhai you are awesome. Love you bhai";
    // Opening files using constructor and writing it
    ofstream out("sample.txt"); // Write operation
    out << st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sampleb.txt"); // Read operation
    // in >> st2; this read only one word
    getline(in, st2); //reads a full line not whole document
    cout << st2;

    return 0;
}

/*
These are some useful classes for working with files in C++

1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

1. Using the constructor
2. Using the member function open() of the class
*/