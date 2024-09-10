#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

int multiply(int a, int b){
    return a * b;
}

int multiply(int a, int b, int c){
    return a * b * c;
}

//better way to handle this for larger number sets
int multiply(int numbers[], int n){
    int result = 1;
    for(int a = 0;a<n;a++){
        result *= numbers[a];
    }

    return result;
}

int main(){
    //function overloading aka polymorphic functions
    //multiple functions with the same name, but different signatures (cannot have the same amount of arguments listed in the same order). making a default value will cause an argument to be optional and could cause ambiguity conflict with another form of the function

    int a = 10;
    int b = 20;
    int c = 30;
    int d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << multiply(a, b) << "\n";
    cout << multiply(a, b, c) << "\n";
    cout << multiply(d, 10) << "\n";
    cout << multiply(1.5, 1.5) << "\n";//will give us 1 because the int function with int parameters is used, converting the doubles to ints
    cout << "'$'*3 = " << multiply('$',3) << "\n";//converts '$' character to its ascii table value in order to multiply
    return 0;
}