#include <iostream>

using std::cout;

int main(){
    int savings = 10000;
    int& savings_reference = savings;//similar to pointer but just points to variable. no need to dereference
    //cannot reassign the way you can a pointer, it'll reassign both vals

    cout<<savings_reference<<"\n";
    savings_reference += 2000;
    cout<<"\n";
    cout<<"reference: "<<savings_reference<<"\n";
    cout<<"savings: "<<savings<<"\n";

    //if we change value of the reference, the value of the original will also change; it's an exact copy and link
    //same applies to references to vectors or any other object
    //references are useful in loops and just anywhere where you might need to access a variable without copying it
    //copying variables can take lots of memory

    /*
    e.g. in the for each loop, the iterating variable makes a copy of each member of the data structure as it iterates through

    for(string apple : vector){
        cout<<apple;
    }

    to save memory and computation time, we can instead just use the reference to those values

    for(string& apple : vector){
        cout<<apple;
    }

    it gives us the same result

    even more, you can make the variable const

    for(const string& apple : vector){
        cout<<apple;
    }
    
    this is a reference to a constant string. we can do this because all we are doing is printing the variable and not making any changes
     */
    return 0;
}