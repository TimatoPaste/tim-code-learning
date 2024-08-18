#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
    //format is: [bool expression] ? ifTrue : ifFalse
    bool apple;
    cout<<"enter bool value: ";
    cin>>apple;

    cout<<endl;
    apple ? cout<<"apple is true" : cout<<"apple is false";

    /*
    the above ternary operation is the same as the below if-else statement
    if(apple){
        cout<<"apple is true";
    }else{
        cout<<"apple is false";
    }
    */
   return 0;
}