#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    /* switch statement: good for replacing long if-else chains. The execution jumps to the cases instead of checking
    each and every one. Jumps to the case that has the same value as the variable

    cannot compare string vals

    syntax:
    switch(variable){
        case value1:
            expression
            break;
        case value2:
            expression
            break;
        default:
            expression
    }
     */

    int apple;
    cout<<"enter a number\n";
    cin>>apple;
    cout<<"\n";

    switch(apple){
        case 0:
            cout<<"apple is 0";
            break;
        case 1:
            cout<<"apple is 1";
            break;
        case 2:
            cout<<"apple is 2";
            break;
        default:
            cout<<"idk what apple is";
    }

    return 0;
}