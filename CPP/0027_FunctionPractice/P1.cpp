//write a function vectorSearch that takes a vector of elements and a target element
//return true if the target element is in the vector and false if not

#include <iostream>
#include <vector>

using std::cout;

template <typename T, typename U>
bool vectorSearch(const std::vector<T> &vec, U target);

int main(){
    std::vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    cout << vectorSearch(a,6);
    return 0;
}
template <typename T, typename U>
bool vectorSearch(const std::vector<T> &vec, U target){
    for(int a = 0;a<vec.size();a++){
        if(vec[a] == target){
            return true;
        }
    }
    return false;
}