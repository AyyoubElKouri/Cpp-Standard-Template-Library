#include <iostream>
#include <vector>

// Header bar : #include <vector>
// vector is a sequence container that stores elements in contiguous memory locations. It is a dynamic array that can resize itself to accommodate new elements.
// It is implemented as a dynamic array, which means that the size of the vector can change at runtime.
// It is a sequence container, which means that it stores elements in a sequence of contiguous memory locations.

// In memory : 

// | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
// when you add a new element to the vector (ex : 99) : 
// | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 99 |


int main()
{
    // Declaring a vector for integers
    std::vector<int> vec;

    // Declaring a vector and initializing it using initializer list
    std::vector<int> vec2 { 1, 4, 3, 6, 2};

    // Declaring a vector and initializing it using iterators
    std::vector<int> vec3 (vec2.begin(), vec2.end());

    // Declaring a vector and initializing it using copy constructor
    std::vector<int> vec4 (vec3);

    // Declaring a vector and initializing it using assignment operator
    std::vector<int> vec5;
    vec5 = vec4;

    // Inserting an element at the end of the vector
    vec.push_back(5); // new vec contains 5

    // Inserting an element at a specific position in the vector
    vec.insert(vec.begin() + 1, 10); // new vec contains 5, 10

    // Removing an element from the vector
    vec.erase(vec.begin() + 1); // new vec contains 5

    // Accessing an element in the vector
    std::cout << vec[0] << std::endl; // prints 5

    // Iterating over the vector
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Checking if the vector is empty
    if (vec.empty())
    {
        std::cout << "The vector is empty" << std::endl;
    }
    else
    {
        std::cout << "The vector is not empty" << std::endl;
    }

    // Getting the size of the vector
    std::cout << "The size of the vector is " << vec.size() << std::endl;

    // Resizing the vector
    vec.resize(10); // new vec contains 5, 0, 0, 0, 0, 0, 0, 0, 0, 0

    // Clearing the vector
    vec.clear(); // new vec is empty
    

    return 0;
}