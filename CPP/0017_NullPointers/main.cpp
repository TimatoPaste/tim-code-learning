#include <iostream>

using std::cout;

int main(){
    int a = 10;

    //initializing multiple ptrs
    int* aPtr, bPtr, cPtr;//this only makes aPtr a pointer to an int. bPtr and cPtr are ints

    int *dPtr, *ePtr, *fPtr;//this makes all three pointers to ints. need the asterisk iin front of all variables
    dPtr = ePtr = fPtr = &a;//all ptrs pointing to a

    cout<<a<<"\n";
    cout<<*dPtr<<"\n";
    cout<<*ePtr<<"\n";
    cout<<*fPtr<<"\n";

    cout<<"\n";

    int g = 15;
    int h = 20;
    int i = 25;

    int *gPtr = &g, *hPtr = &h, *iPtr = &i;//makes three pointers that point to respective variables' addresses

    cout<<g<<" "<<*gPtr<<"\n";
    cout<<h<<" "<<*hPtr<<"\n";
    cout<<i<<" "<<*iPtr<<"\n";

    cout<<"\n";

    //if pointers are not pointing to anything, they'd have a random address - unexpected behavior
    //never try to dereference a null pointer, can accidentally modify random memory address values

    //segmentation fault: trying to access memory when you don't have permission, normally crashes program
    
    int* j = nullptr;//ensures that pointer doesn't get a random address. prevents unsafe behavior

    return 0;
}
