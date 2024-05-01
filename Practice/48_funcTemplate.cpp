#include <iostream>
using namespace std;

//Function Templates & Function Templates with Parameters
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}


int main()
{
    float a;
    a = funcAverage(5, 2);
    printf("The average of these numbers is %f", a);//c++ me printf bhi use kar sakte hai😁

    float b;
    b = funcAverage(5, 2.8);
    printf("The average of these numbers is %f", b);
    return 0;
}
