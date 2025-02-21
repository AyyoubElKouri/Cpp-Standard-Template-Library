#include <iostream>
#include <list>

/**
 * C++ Standard Library - std::list (Doubly Linked List)
 * ----------------------------------------------------
 * - std::list is a sequence container that implements a **doubly linked list**.
 * - It allows **fast insertions and deletions** from both ends and anywhere in the list.
 * - Unlike `std::vector`, `std::list` **does not provide random access** (no `[]` operator).
 * - Iterators are required to access elements sequentially.
 * - Memory overhead is higher due to additional pointers for each node.
 */

int main() {
    // Creating an empty list of integers
    std::list<int> myList;

    // Initializing a list using an initializer list
    std::list<int> myList2 {1, 4, 3, 6, 2};

    // Initializing a list using iterators from another list
    std::list<int> myList3(myList2.begin(), myList2.end());

    // Copying a list using the copy constructor
    std::list<int> myList4(myList3);

    // Assigning one list to another
    std::list<int> myList5;
    myList5 = myList4;

    // Adding elements to the list
    myList.push_back(10); // Adds 10 at the end
    myList.push_front(5); // Adds 5 at the beginning
    myList.push_back(15); // Adds 15 at the end

    // Printing the list elements
    std::cout << "List elements: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Removing elements
    myList.pop_front(); // Removes the first element
    myList.pop_back();  // Removes the last element

    // Printing the modified list
    std::cout << "After pop operations: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Inserting an element at a specific position (before the second element)
    auto it = myList.begin();
    ++it; // Move iterator to second position
    myList.insert(it, 20); // Inserts 20 before the second element

    // Printing the list after insertion
    std::cout << "After insertion: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Erasing an element from the list (removing second element)
    it = myList.begin();
    ++it; // Move iterator to second position
    myList.erase(it); // Remove element at the second position

    // Printing the list after deletion
    std::cout << "After deletion: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Accessing the first and last elements
    std::cout << "First element: " << myList.front() << std::endl;
    std::cout << "Last element: " << myList.back() << std::endl;

    // Sorting the list
    myList.sort();
    std::cout << "Sorted list: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Reversing the list
    myList.reverse();
    std::cout << "Reversed list: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
