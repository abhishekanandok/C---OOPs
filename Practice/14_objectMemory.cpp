#include <iostream>
using namespace std;

/*The way memory is allocated to variables and functions of the class is different even though they both are from the same class.

The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables when the class is declared. At the same time, single variables can have different values for different objects, so every object has an individual copy of all the variables of the class. But the memory is allocated to the function only once when the class is declared. So the objects don’t have individual copies of functions only one copy is shared among each object.*/

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
