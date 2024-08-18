#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//have to initialize function prototype before can use function, but can put the actual function code anywhere
//e.g. returnType functionName(parameters); this is the prototype
void printBoard(char board[3][3]);
bool validMove(string move);
int* moveToCoord(string move);

string p1_name;
string p2_name;
string current_player;
char current_mark;
string player_move;



int main(){
    cout<<"player 1, please enter your name:";
    getline(cin,p1_name);
    cout<<"player 2, please enter your name:";
    getline(cin,p2_name);
    cout<<"\n";

    char board[3][3] = {
                            {'-','-','-'},
                            {'-','-','-'},
                            {'-','-','-'},
                        };
    
    current_player = p1_name;
    current_mark = 'X';

    while(true){
        printBoard(board);
        
        cout<<current_player<<", please make your move:";
        getline(cin, player_move);
        while(!validMove(player_move)){
            cout<<"invalid move! please use the a-c coordinates, aa being top left and cc being bottom right:\n";
            getline(cin, player_move);
        }
        
        /////////////////////////////////////////////// you were trying to do move array and making the actual move
        if(current_player == p1_name){
            current_player = p2_name;
            current_mark = 'O';
        }
        else{
            current_player = p1_name;
            current_mark = 'X';
        }
    }
    return 0;
}

void printBoard(char board[3][3]){
    for(int r = 0;r<3;r++){
        cout<<"   |   |\n";
        for(int c = 0;c<3;c++){
            if(c == 2){
                cout<<" "<<board[r][c];
                if(r == 2){
                    cout<<"\n   |   |   ";
                }
                else{
                    cout<<"\n___|___|___";
                }
            }
            else{
                cout<<" "<<board[r][c]<<" |";
            }
        }
        cout<<"\n";
    }
}

char valid_coord[] = {'a','b','c'};
bool validMove(string move){
    if(move.length() != 2){
        return false;
    }
    else{
        int valid = 0;
        for(char move_coord : move){
            for(char val_coord : valid_coord){
                if(move_coord == val_coord){
                    valid++;
                    break;
                }
            }
        }
        if(valid == 2){
            return true;
        }
    }
    return false;
}

//changes move format to array of indices
int* movetoCoord(string move){
    int coord_array[2];
    for(int coord = 0;coord<2;coord++){
            for(int valid = 0;valid<3;valid++){
                switch(coord){
                    case 0:
                        coord_array[0] = valid;
                        break;
                    case 1:
                        coord_array[1] = valid;
                        break;
                    default:
                }
            }
        }
    return coord_array;//returns a pointer to the coord_array
}