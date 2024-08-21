#include <string>
#include <iostream>

using std::cout;
using std::cin;

int* returnIntArray();

int main(){
    int* banana = returnIntArray();
    cout<<banana[1];
    return 0;
}

int* returnIntArray(){
    static int apple[5];//need static so that the array will stay and not get cleaned at the end of function
    for(int a = 0;a<5;a++){
        apple[a] = a;
    }
    return apple;
}