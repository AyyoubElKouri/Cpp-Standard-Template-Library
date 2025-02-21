#include <iostream>
#include <deque>

// Header bar : #include <deque>
// deque is a double-ended queue, which means that it can be used to store elements in both directions.
// It is a sequence container, which means that it stores elements in a sequence of contiguous memory locations.
// It is implemented as a dynamic array, which means that the size of the deque can change at runtime.
// It is a sequence container, which means that it stores elements in a sequence of contiguous memory locations.

// In memory : 

// | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
// when you add a new element to the deque (ex : 99) : 
// | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 99 |



int main()
{
    // Declaring a deque for integers
    std::deque<int> deque;

    // Declaring a deque and initializing it using initializer list
    std::deque<int> deque2 { 1, 4, 3, 6, 2};

    // Declaring a deque and initializing it using iterators
    std::deque<int> deque3 (deque2.begin(), deque2.end());

    // Declaring a deque and initializing it using copy constructor
    std::deque<int> deque4 (deque3);

    // Declaring a deque and initializing it using assignment operator
    std::deque<int> deque5;
    deque5 = deque4;

    // Inserting an element at the end of the deque
    deque.push_back(5); // new deque contains 5

    // Inserting an element at a specific position in the deque
    deque.insert(deque.begin() + 1, 10); // new deque contains 5, 10

    // Removing an element from the deque
    deque.erase(deque.begin() + 1); // new deque contains 5

    // Accessing an element in the deque
    std::cout << deque[0] << std::endl; // prints 5

    // Modifying an element in the deque
    deque[0] = 10; // new deque contains 10

    // Iterating over the deque
    for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;


    return 0;
}