#include <iostream>

using std::cout;

int main(){
    int savings = 10000;
    const int savings2 = 50000;

    //read backwards. this is a const pointer to an int
    int* const savings_ptr = &savings; //const comes after the asterisk. cannot change value assigned since it's const

    cout<<savings<<'\n';
    cout<<savings2<<'\n';

    //this is pointer to a const int, when const is before the asterisk
    //meanwhile, a pointer to a const value can have its address changed because the value it's pointing to is const, not its own value
    const int* savings_ptr2 = &savings2;
    int const* savings_ptr2 = &savings2;//this is the same as the line above it.

    //const is before and after asterisk so this is a constant pointer to a constant int.
    const int* const savings_ptr3 = &savings2;
}