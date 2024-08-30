#include <iostream>

using std::cout;
using std::cin;

int main(){
    int row_count;
    int column_count;
    cout << "Enter 2 numbers for row count and column count\n";
    cin >> row_count >> column_count;
    //int** table = new int*[row_count][column_count]; is improper syntax for what we want
    int** table = new int*[row_count];//new returns address of array of pointers
    for(int a = 0;a<column_count;a++){
        table[a] = new int[column_count];//new returns address of array of ints. this line makes each pointer in the table array point to an int array, making 2D array using pointers
    }

    //now filling some values in table

    for(int r = 0;r<row_count;r++){
        for(int c = 0;c<column_count;c++){
            //can make val depend on the row easily using ternary
            table[r][c] = (r == 0 || r == 1) ? 0 : 1;//the 2 sets of brackets dereference the double pointer and get the array 
        }
    }

    for(int r = 0;r<row_count;r++){
        for(int c = 0;c<column_count;c++){
            cout << table[r][c] << " ";
            //same as cout << *(*(table + r) + c);
        }
        cout << "\n";
    }


    /*
    pointers point to head of the array, so you can also get the i-th term by doing *(pointer + i)
    same can be done with 2D by doing *(*(2pointer + r) + c) (this is called point arithmetic)
    */

    return 0;
}