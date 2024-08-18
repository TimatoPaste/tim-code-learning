#include <iostream>
#include <string.h>
#include <typeinfo>

int main(){
    //int will round decimal down
    int apple = 10.9f;
    std::cout<<"int value of 10.9f: "<<apple<<std::endl;

    std::cout<<std::endl;
    
    //bool will be 0 if given a zero value and will be 1 if given non-zero
    bool banana = 10;
    std::cout<<"bool val of 10: "<<banana<<std::endl;

    std::cout<<std::endl;

    //true = 1, false = 0;
    std::cout<<"value of true: "<<true<<std::endl;

    std::cout<<std::endl;

    /*char turned int turns into the ascii value of the char. int will turn into the char with the ascii 
    value matching the int*/
    char intToChar = 97;//ascii for a
    int charToInt = 'a';//note: double quotes are different from single

    std::cout<<"char corresponding to 97: "<<intToChar<<std::endl;
    std::cout<<"int corresponding to 'a': "<<charToInt<<std::endl;


    return 0;
}