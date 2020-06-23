#include <iostream>
// This is a pointer program to get me familiar with creating, accessing, and manipulating pointers

int main() {

    //create an empty int
    int getty;
    //print out the address of the pointer
    std::cout << "the address is: " << &getty << std::endl;
    //assign the address to a different variable
    int* addy = reinterpret_cast<int*>(&getty);
    //print out the variables
    std::cout << "the addy value is: " << *addy << std::endl;
    std::cout << "the addy address is: " << &addy << std::endl;
    //assigning a value to the newest pointer to change the value of the first object
    *addy = 55;
    //print out the original object
    std::cout << "the new value is: " << getty << std::endl;
    return 0;
}
