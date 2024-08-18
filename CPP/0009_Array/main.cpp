//Static and Dynamic Arrays

/*
static array: 
    -fixed length container with n elements 
    -indexed from [0,n-1]
    -used for:
        =store/access sequential data
        =temporary item storage
        =buffers (read small chunks of file stored in temp array at a time) for io routines
        =lookup/reverse lookup tables (?)
        =return multiple vals in function
        =dynamic programming to cache answers to subproblems (?)
    -init syntax:
        type name[int length];//allocates space for static array
        OR
        type name[int length] = {1,2,3,...,length};//assigns values at the same time of initializing
        OR
        type name[] = {1,2,3,...};//can just omit size if you assign when initializing
    -access syntax:
        name[index];


dynamic array:
    -same as static array, but can grow and shrink in size
    -methods of implementation:
        =static arrays and resizing by moving to a bigger one

arrays' time complexities:
        Static  Dynamic
Access:  O(1)    O(1)
Search:  O(n)    O(n) looking through all elements
Insert:  n/a     O(n) shifting all elements
Append:  n/a     O(1) rebuilding happens infrequently
Delete:  n/a     O(n) shifting all elements
*/
#include <iostream>
int main(){
    int banana[10];//allocates space for 10 item long int array called banana;
    int orange[5] = {8,9,10,11,12};
    int apple[] = {1,2,3,4,5};//assigns values in array apple as it is initialized

    for(int i = 0;i<sizeof(banana)/sizeof(int);i++){
        banana[i] = i;//assigning values to indices of banana
    }

//print banana
    for(int i = 0;i<sizeof(banana)/sizeof(int);i++){
        std::cout<<banana[i];
        std::cout<<" ";
    }
    std::cout<<std::endl;
//print orange
    for(int i = 0;i<sizeof(orange)/sizeof(int);i++){
        std::cout<<orange[i];
        std::cout<<" ";
    }
    std::cout<<std::endl;
//print apple
    for(int i = 0;i<sizeof(apple)/sizeof(int);i++){
        std::cout<<apple[i];
        std::cout<<" ";
    }
    return 0;
    std::cout<<std::endl;
}