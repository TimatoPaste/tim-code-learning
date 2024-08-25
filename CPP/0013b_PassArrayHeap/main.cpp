#include <iostream>

using std::cout;

int* returnArray();

int main(){
    int* banana = returnArray();
    for(int a = 0;a<5;a++){
        cout << banana[a] << "\n";
    }
    delete[] banana; //when to use delete and when to use delete[]: https://stackoverflow.com/questions/4670782/the-difference-between-delete-and-delete-in-c
    banana = nullptr;
    return 0;
}

int* returnArray(){
    int* apple = new int[5]{1,2,3,4,5};
    return apple;
}