#include <iostream>
#include <deque>
#include <algorithm>

/**
 * C++ Standard Library - std::deque (Double-Ended Queue)
 * -------------------------------------------------
 * - std::deque is a **sequence container** that allows **fast insertions and deletions** at both ends.
 * - Unlike std::vector, it does not store elements contiguously but in **multiple memory blocks**.
 * - Provides **constant time** push/pop at both front and back.
 * - Supports **random access** like a vector but with slightly worse cache performance.
 */

int main() {
    // Creating an empty deque of integers
    std::deque<int> myDeque;

    // Initializing a deque using an initializer list
    std::deque<int> myDeque2 {1, 4, 3, 6, 2};

    // Initializing a deque using iterators from another deque
    std::deque<int> myDeque3(myDeque2.begin(), myDeque2.end());

    // Copying a deque using the copy constructor
    std::deque<int> myDeque4(myDeque3);

    // Assigning one deque to another
    std::deque<int> myDeque5;
    myDeque5 = myDeque4;

    // Adding elements to the front and back
    myDeque.push_back(10); // Adds 10 at the end
    myDeque.push_front(5); // Adds 5 at the beginning
    myDeque.push_back(15); // Adds 15 at the end

    // Printing the deque elements
    std::cout << "Deque elements: ";
    for (int value : myDeque) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Removing elements from the front and back
    myDeque.pop_back(); // Removes last element
    myDeque.pop_front(); // Removes first element

    // Printing the modified deque
    std::cout << "After pop operations: ";
    for (int value : myDeque) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Inserting an element at a specific position
    auto it = myDeque.begin() + 1; // Move iterator to second position
    myDeque.insert(it, 20); // Inserts 20 before the second element

    // Printing the deque after insertion
    std::cout << "After insertion: ";
    for (int value : myDeque) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Erasing an element from the deque
    it = myDeque.begin() + 1; // Move iterator to second position
    myDeque.erase(it); // Remove element at the second position

    // Printing the deque after deletion
    std::cout << "After deletion: ";
    for (int value : myDeque) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Accessing the first and last elements
    std::cout << "First element: " << myDeque.front() << std::endl;
    std::cout << "Last element: " << myDeque.back() << std::endl;

    // Sorting the deque
    std::sort(myDeque.begin(), myDeque.end());
    std::cout << "Sorted deque: ";
    for (int value : myDeque) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Reversing the deque
    std::reverse(myDeque.begin(), myDeque.end());
    std::cout << "Reversed deque: ";
    for (int value : myDeque) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
