#include <iostream>

using std::cout;

int main(){

    //static memory - stack memory (allocated at build/compile time)
    //dynamic memory - heap memory/free store (allocated at run time), needs to be cleaned
    //heap is larger than stack and is used when you don't know how much memory needed ahead of time
    
    int savings; //created on stack
    savings = 10000;
    cout << &savings << " " << savings << "\n";


    int* savingsPtr = new int;//new keyword allocates memory on the heap and returns the memory address. access it with a pointer
    //pointer is created on stack, but the address it is pointing to is on the heap
    *savingsPtr = 50000;

    //can also just do int* savingsPtr = new int(50000)
    cout << savingsPtr << " " << *savingsPtr << "\n";

    //no garbage collector in cpp
    delete savingsPtr;//use delete keyword on a memory address to free it up
    //ptr holds the memory address, so we can just pass that into delete
    savingsPtr = new int(1000);

    cout<< savingsPtr << " " << *savingsPtr << "\n";

    //memory leak happens when you do not free the memory address used before
    //even though savingsPtr pointing to a new address, the old address is still holding onto the other value (50000), taking up resources
    //can no longer access the old address because no pointer is pointing to it.
    //without the delete, this would cause a memory leak

    //note: do not free up the memory twice unless you've assigned after the first time

    //a pointer that is pointing to a freed up memory address is called a dangling pointer, which can cause unpredictable behavior. set the dangling pointer to nullptr to avoid this.
    return 0;
}