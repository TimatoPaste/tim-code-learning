#include <iostream>

using std::cout;

//i.e. double pointer (points to the memory address of another pointer)
int main(){
    int savings = 50000;
    int* savings_pointer = &savings;
    int** savings_double_pointer = &savings_pointer; //double pointer!!

    cout << "savings: " << &savings << " " << savings << "\n";
    cout << "savings_pointer: " << savings_pointer << " " << *savings_pointer << "\n";
    cout << "savings_double_pointer: " << savings_double_pointer << " " << *savings_double_pointer << "\n";//printing addess of savings_pointer (storred by double pointer), then address of savings (stored by savings_pointer)
    cout << "savings from savings_double_pointer: " << **savings_double_pointer << "\n";//double asterisk can dereference double pointer.
    //double pointer can dynamically allocate 2D array on heap. going to try it.
    //cannot make a double reference because a reference is an alias. double reference would be pointless
    return 0;
}