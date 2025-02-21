#include <iostream>
#include <vector>
#include <algorithm>

/**
 * C++ Standard Library - std::vector (Dynamic Array)
 * -------------------------------------------------
 * - std::vector is a **dynamic array** that provides **fast random access**.
 * - It allows **efficient insertions and deletions** at the end but is expensive in the middle.
 * - Memory is managed automatically, and it grows dynamically.
 * - Elements are stored **contiguously in memory**, providing cache-friendly access.
 */

int main() {
    // Creating an empty vector of integers
    std::vector<int> myVector;

    // Initializing a vector using an initializer list
    std::vector<int> myVector2 {1, 4, 3, 6, 2};

    // Initializing a vector using iterators from another vector
    std::vector<int> myVector3(myVector2.begin(), myVector2.end());

    // Copying a vector using the copy constructor
    std::vector<int> myVector4(myVector3);

    // Assigning one vector to another
    std::vector<int> myVector5;
    myVector5 = myVector4;

    // Adding elements to the vector
    myVector.push_back(10); // Adds 10 at the end
    myVector.push_back(5);  // Adds 5 at the end
    myVector.push_back(15); // Adds 15 at the end

    // Printing the vector elements
    std::cout << "Vector elements: ";
    for (int value : myVector) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Removing the last element
    myVector.pop_back(); // Removes last element

    // Printing the modified vector
    std::cout << "After pop operation: ";
    for (int value : myVector) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Inserting an element at a specific position
    auto it = myVector.begin() + 1; // Move iterator to second position
    myVector.insert(it, 20); // Inserts 20 before the second element

    // Printing the vector after insertion
    std::cout << "After insertion: ";
    for (int value : myVector) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Erasing an element from the vector
    it = myVector.begin() + 1; // Move iterator to second position
    myVector.erase(it); // Remove element at the second position

    // Printing the vector after deletion
    std::cout << "After deletion: ";
    for (int value : myVector) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Accessing the first and last elements
    std::cout << "First element: " << myVector.front() << std::endl;
    std::cout << "Last element: " << myVector.back() << std::endl;

    // Sorting the vector
    std::sort(myVector.begin(), myVector.end());
    std::cout << "Sorted vector: ";
    for (int value : myVector) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Reversing the vector
    std::reverse(myVector.begin(), myVector.end());
    std::cout << "Reversed vector: ";
    for (int value : myVector) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}