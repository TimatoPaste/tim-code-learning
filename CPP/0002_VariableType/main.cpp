#include <iostream>
#include <string.h>
#include <typeinfo>

int main(){
    int apple = 10;
    float banana = 10.999f;
    std::string orange = "helllo";

    //gives info on types. name obviously gives name of the type
    std::cout<<typeid(apple).name()<<std::endl;
    std::cout<<typeid(banana).name()<<std::endl;
    std::cout<<typeid(orange).name();

    return 0;
}