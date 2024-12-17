// STL Example.cpp

// Include necessary headers
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    // Vectors
    // Dynamic arrays that can grow or shrink in size
    vector<int> myVector = {1, 2, 3, 4, 5};
    cout << "Vector: ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Lists
    // Doubly-linked lists that allow efficient insertion and deletion
    list<int> myList = {1, 2, 3, 4, 5};
    cout << "List: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Maps
    // Associative containers that store key-value pairs
    map<string, int> myMap = {{"one", 1}, {"two", 2}};
    cout << "Map: ";
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << ": " << it->second << " ";
    }
    cout << endl;

    // Sets
    // Containers that store unique elements
    set<int> mySet = {1, 2, 3, 4, 5};
    cout << "Set: ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Sorting
    // Sorts elements in a container
    vector<int> myVector2 = {3, 2, 5, 1, 4};
    cout << "Unsorted Vector: ";
    for (auto it = myVector2.begin(); it != myVector2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    sort(myVector2.begin(), myVector2.end());
    cout << "Sorted Vector: ";
    for (auto it = myVector2.begin(); it != myVector2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Searching
    // Finds an element in a container
    vector<int> myVector3 = {1, 2, 3, 4, 5};
    auto it = find(myVector3.begin(), myVector3.end(), 3);
    if (it != myVector3.end()) {
        cout << "Found 3 in Vector" << endl;
    } else {
        cout << "Did not find 3 in Vector" << endl;
    }

    // Iterating
    // Iterates over elements in a container
    vector<int> myVector4 = {1, 2, 3, 4, 5};
    cout << "Vector: ";
    for (auto it = myVector4.begin(); it != myVector4.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}