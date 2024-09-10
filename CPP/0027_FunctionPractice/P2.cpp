//write function vectorCount that takes a vector and a target value
//returns int indicating how many times the target occurs in the vector

#include <iostream>
#include <vector>

using std::cout;

template <typename N>

int vectorCount(const std::vector<N> &vec, N target);

int main(){
    std::vector<int> apple = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 5, 5};
    cout << vectorCount(apple, 5);
    return 0;
}

template <typename N>
int vectorCount(const std::vector<N> &vec, N target){
    int counter = 0;
    for(int a = 0;a<vec.size();a++){
        if(vec[a] == target){
            counter++;
        }
    }
    return counter;
}