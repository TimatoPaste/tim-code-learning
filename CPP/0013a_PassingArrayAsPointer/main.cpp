#include <string>
#include <iostream>

using std::cout;
using std::cin;

int* returnIntArray();

int main(){
    int* banana = returnIntArray();
    cout<<banana[1];// the [] dereferences the pointer, so you don't need to use *. see more here: https://stackoverflow.com/questions/40558977/why-in-c-i-dont-need-to-dereference-a-pointer-to-an-array-in-order-to-access
    return 0;
}

int* returnIntArray(){
    static int apple[5];//need static so that the array will stay and not get cleaned at the end of function. can also make heap array instead. see next part for example
    for(int a = 0;a<5;a++){//what static keyword does: https://www.w3schools.com/cpp/ref_keyword_static.asp#:~:text=The%20static%20keyword%20is%20a,all%20instances%20of%20the%20class.
        apple[a] = a;
    }
    return apple;//array is returned as a pointer
}