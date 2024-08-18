#include <iostream>
using std::cout; //using keyword allows that namespace to be used for the entire scope, eliminating need for constant colons
using std::cin; //be careful, as your things can clash with those in the namespace, so don't do sommething like using std; 
using std::endl; //be more specific when using "using"

int main(){
    cout<<"hello"<<endl; //instead of std::cout<<"hello"<std::endl;
    return 0;
}