#include <iostream>
#include <string.h>

int main(){
    //note: variables with unassigned values will get really random values; be careful
    int a;
    std::cout<<a<<std::endl;

    std::cout<<std::endl;

    int x,y,z; //inits x, y, and z all at the same time
    x = 1;
    y = 2;
    z = 3;

    std::cout<<"x: "<<x<<std::endl<<"y: "<<y<<std::endl<<"z: "<<z<<std::endl;

    std::cout<<std::endl;

    int b,c,d; //can also just assign all of them to the same val
    b = c = d = 10;
    std::cout<<"b: "<<b<<std::endl<<"c: "<<c<<std::endl<<"d: "<<d<<std::endl;
    return 0;
}