#include <iostream>
using namespace std;

int volume(int len, int wid = 4, int height)
{
    cout << "\nlength = " << len << "\nWidth = " << wid << "\nheight=" << height;
    return len * wid * height;
};

int main()
{
    cout << "\nvolume= " << volume(2, 3, 4);
    return 0;
};