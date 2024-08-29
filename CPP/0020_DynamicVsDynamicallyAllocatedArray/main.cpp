//implementing a dynamic array
#include <iostream>

using std::cout;
using std::cin;

int main(){
    //3 things that make up an array:
    int size = 0;
    int capacity = 4;
    int* data = new int[capacity];//dynamically allocated array
    //dynamic array "resizes" by making bigger array and destroying old array when full

    int number_of_elements;
    cin >> number_of_elements;

    for(int a = 0;a<number_of_elements;a++){
        if(size == capacity){//resizing process
            cout << "Capacity reached. Doubling capacity from " << capacity << "\n";
            capacity *= 2;
            cout << "Capacity is now " << capacity << "\n";

            int* new_data = new int[capacity];//in the loop scope
            for(int b = 0;b<size;b++){
                new_data[b] = data[b];
            }
            delete[] data;
            data = new_data;//data pointing to new array (new_data pointer returns address of new array) so that same pointer, different array, can be used for the rest of program
            new_data = nullptr;//cleaning up before it is out of scope
        }
        cout << "enter a value: ";
        cin >> data[size];//adds to end of array
        size++;
    }

    for(int a = 0;a<size;a++){
        cout << data[a] << " ";
    }
    cout << "\n";

    delete[] data;
    data = nullptr;

    return 0;
    /*
    note: the scope of the pointer can help make values that were initialized in smaller scopes accessible by pointing to them
    */
}