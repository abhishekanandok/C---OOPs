#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // Initialize an empty vector

    v.push_back(1); // Add an element to the end
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << "Initial vector: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.pop_back(); // Remove the last element

    cout << "After pop_back: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;



    cout << "Size of vector: " << v.size() << endl; // Size of the vector
    cout << "Capacity of vector: " << v.capacity() << endl; // Capacity of the vector




    cout << "Element at index 1: " << v.at(1) << endl; // Access element at index 1

    cout << "Front element: " << v.front() << endl; // First element
    cout << "Back element: " << v.back() << endl;   // Last element

    v.insert(v.begin() + 1, 5); // Insert 5 at index 1

    cout << "After insert: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;





    v.erase(v.begin()+1); // Remove element at index 1
    cout << "After erase: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.erase(v.begin()+1, v.begin()+4); // Remove elements at indices 1 to 3
    cout << "After erase: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;





    v.clear(); // Remove all elements

    cout << "After clear, is vector empty? " << (v.empty() ? "Yes" : "No") << endl; // Check if empty

    return 0;
}
