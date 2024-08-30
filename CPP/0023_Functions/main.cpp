#include <iostream>
#include <string>

using std::cout;
using std::string;

void hello(const string& apple = "hello");//this is a function signature/prototype, makes function exist without establishing the code yet. function can be used before the code in it is init
//default value of apple is "hello"

void greet(){
    cout << "hello!\n";
}

void greet_string(string greeting){//the parameters pass by value, which is inefficient because it makes copy of the passed-in values
    cout << greeting << "\n";
}

void greet_string_reference(const string& greeting){//uses less resources because reference is just an alias. pass by reference. mark as const if you do not want to change val
    cout << greeting << "\n";
}

int main(){
    greet(); 
    greet_string("hello!");
    greet_string_reference("hello");//the function does not make a copy of this passed in string because it takes the ref instead
    return 0;
}

void hello(const string& apple = "hello"){
    cout << apple << "\n";
}

//return statement in a function ends the execution of that function and causes the function to pass the value to the expression it was used in
//function will attempt to convert inputted arguments into the type that they required. returning will also have function attempt to convert the returned value into the type that the function is supposed to return