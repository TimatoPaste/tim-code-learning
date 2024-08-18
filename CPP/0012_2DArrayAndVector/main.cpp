#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
    string apple[][3] = {
                            {"a","b","c"},
                            {"d","e","f"},
                            {"g","h","i"}
                        };//initializes 2d string array (must declare size of the inner arrays)
    
    for(int a = 0;a<3;a++){
        for(int b = 0;b<3;b++){
            switch(b){
                case 2:
                    cout<<apple[a][b];
                    break;
                default:
                    cout<<apple[a][b]<<" ";
            }
        }
        cout<<endl;
    }

    cout<<endl;

    vector<vector<int>> banana = {
                                    {1,2,3,4},
                                    {5,6},
                                    {7,8,9,10,11}
                                 };//creates 2d int vector (inner vectors, unlike 2d array, do not have to be same size)
    
    for(int a = 0;a<banana.size();a++){
        for(int b = 0;b<banana[a].size();b++){
            if(b==banana[a].size()-1){
                cout<<banana[a][b];
            }else{
                cout<<banana[a][b]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}