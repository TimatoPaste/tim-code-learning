#include <iostream>

using std::cout;
using std::cin;

int main(){
    int lottery_tickets[3] = {55, 32};//capacity of 3, size of 2 currently
    lottery_tickets[2] = 64;//now is size of 3
    //lottery_tickets[3] = ... this will cause error because the array is not allowed to have a fourth item

    //int lottery_tickets[10]; this will cause error because the initial capacity 3 array was init on the stack, so it is fixed

    //int lottery_tickets[cin_value]; cannot set the capacity to a user input because array is init at compile/build time on stack and the cin value is only gotten during runtime. it will not be possible to init this array properly

    //if you need a more lenient array, you have to init on heap
    
    int capacity;

    cout << "How many tickets would you like to buy?\n";
    cin >> capacity;

    int* lottery_tickets_ptr = new int[capacity];//square brackets make array, parentheses will make a single int

    for(int a = 0;a<capacity;a++){
        cout << "Enter a lottery number: ";
        cin >> lottery_tickets_ptr[a];
    }

    for(int a = 0;a<capacity;a++){
        cout << lottery_tickets_ptr[a] << "\n";
    }
    cout << "\n";
    //remember to free the heap memory after done using
    delete[] lottery_tickets_ptr;
    //also fix dangling ptr
    lottery_tickets_ptr = nullptr;

    //can also init the array on heap with values
    int* pre_lottery_tickets_ptr = new int[capacity]{1,2,3,4}; //if capacity < size, error will be thrown
    for(int a = 0;a<4;a++){
        cout << pre_lottery_tickets_ptr[a] << "\n";
    }


    return 0;
}