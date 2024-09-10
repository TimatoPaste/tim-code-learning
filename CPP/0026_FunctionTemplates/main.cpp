#include <iostream>
#include <string>

using std::cout;
using std::string;

void Swap(int& a, int& b){//works, but not for other types. use templates to generalize for different types
    int temp = a;
    a = b;
    b = temp;
}

template <typename T>// template <typename name_referring_to_any_type> class and typename are interchangeable keywords for this use case
//only works for the one function below it
void Swap(T& a, T& b){// using template here instead of the types
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int apple = 10;
    int banana = 20;

    string thing = "hello there";
    string bing = "bye bye";

    Swap(apple, banana); //can also specify parameter type by doing functionName<type>(parameters), but it's optional and for readability
    Swap(thing, bing);
    return 0;

    //can use templates to make a function that prints any vector type, for example.
    //can also be used to make it so that the order of types in function parameters does not matter. make sure that you don't need the order to matter first haha
}