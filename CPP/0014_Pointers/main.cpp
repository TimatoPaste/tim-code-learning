#include <iostream>

using std::cout;

int main(){
    int savings = 10000;
    int* savings_pointer = &savings; //pointer is assigned memory address. & gets address
    *savings_pointer += 5000; // using * to dereference pointer (getting the value at the stored address)

    cout<<savings<<"\n";//these two are referencing the same memory address. value is stored in one, address is stored in other
    cout<<*savings_pointer;//a change to the value at the address will also change the actual variable

    *savings_pointer += 10000;

    cout<<savings<<"\n";
    cout<<*savings_pointer;

    //also make sure dereference happens first. sometimes other operations will go first and create error (*pointer).thing() instead of *pointer.thing()

    return 0;
}