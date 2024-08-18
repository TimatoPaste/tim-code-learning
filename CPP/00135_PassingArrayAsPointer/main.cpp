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
    static int apple[5];//has to be static because that will make it last until the program ends rather than until this function ends (i think)
    for(int a = 0;a<5;a++){
        apple[a] = a;
    }
    return apple;
}