#include <iostream>
using namespace std;

class NumberSwapper;  // Forward declaration

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Friend function declaration for swapping
    friend void swapNumbers(Number&, Number&);

    // Friend class declaration
    friend class NumberSwapper;
};

// Friend function definition for swapping
void swapNumbers(Number& num1, Number& num2) {
    std::swap(num1.value, num2.value);
}

// Friend class definition for swapping
class NumberSwapper {
public:
    // Function to swap numbers using friend class
    static void swap(Number& num1, Number& num2) {
        std::swap(num1.value, num2.value);
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    // Display original values
    cout << "Before swapping:" << endl;
    cout << "Number 1: " << num1.value << endl;
    cout << "Number 2: " << num2.value << endl;

    // Swap numbers using friend function
    swapNumbers(num1, num2);

    // Display values after swapping using friend function
    cout << "\nAfter swapping using friend function:" << endl;
    cout << "Number 1: " << num1.value << endl;
    cout << "Number 2: " << num2.value << endl;

    // Swap numbers using friend class
    NumberSwapper::swap(num1, num2);

    // Display values after swapping using friend class
    cout << "\nAfter swapping using friend class:" << endl;
    cout << "Number 1: " << num1.value << endl;
    cout << "Number 2: " << num2.value << endl;

    return 0;
}
