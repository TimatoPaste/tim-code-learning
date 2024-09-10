#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapReference(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

string makeUppercase(string name){//this only makes the name variable in function local scope uppercase because name was passed by value. use pass by value or pass by ref based on what you need
    for(int a = 0;a<name.length();a++){
        name[a] = toupper(name[a]);
    }
    return name;
}

void makeUppercaseReference(string& name){
    for(int a = 0;a<name.length();a++){
        name[a] = toupper(name[a]);
    }
}

void printVector(const vector<string>& vector){//passing by const reference because we are only reading it (semantics to make code easier to understand to readers and can potentially help when debugging) 
    for(int a = 0;a<vector.size();a++){
        cout << vector[a] << "\n";
    }
}

int main(){
    //Pass by Value - Usually used for primitive types
    //Pass by Reference - Usually used for class types like strings and vectors (because they take up more resources)
    //Pass by Const Reference - Same as pass by reference but if you are only reading parameter and not modifying it

    int a = 10;
    int b = 20;

    cout << "a: " << a << " b: " << b << "\n";
    swap(a,b);//does not make a difference because the primitive values were passed by value. nothing about the original variables were changed
    cout << "a: " << a << " b: " << b << "\n";
    swapReference(a,b);
    cout << "a: " << a << " b: " << b << "\n";

    string thing = "hello man";
    string haha = "hello man";

    cout << "\n";

    cout << "by value\n";
    cout << "thing before: " << thing << "\nreturn val: " << makeUppercase(thing) << "\nthing after: " << thing << "\n";
    cout << "\n";
    cout << "by reference\n";
    cout << "haha before : " << haha << "\nno return val" << "\n";
    makeUppercaseReference(haha);
    cout << "haha after: " << haha << "\n";

    cout << "\n";

    vector<string> cities = {"New York", "Paris", "London"};
    printVector(cities);
    return 0;
}