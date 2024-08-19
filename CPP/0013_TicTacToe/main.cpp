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
bool boardFull(char board[3][3]);
int checkHorizontalWin(char board[3][3]);
int checkVerticalWin(char board[3][3]);
int checkDiagonalWin(char board[3][3]);
int checkWin(char board[3][3]);

string winner;
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

    //main loop
    while(true){
        printBoard(board);
        
        cout<<current_player<<", please make your move:";
        getline(cin, player_move);
        int* move_coord = moveToCoord(player_move);

        while(!validMove(player_move) || board[move_coord[0]][move_coord[1]] != '-'){
            cout<<"invalid move! please use the a-c coordinates, aa being top left and cc being bottom right:\n";
            getline(cin, player_move);
            move_coord = moveToCoord(player_move);
        }

        board[move_coord[0]][move_coord[1]] = current_mark;

        //switch players
        current_player = (current_player == p1_name) ? p2_name : p1_name;
        current_mark = current_mark == 'X' ? 'O' : 'X';

        //checking for win
        int win_num = checkWin(board);
        if(win_num == -1){
            continue;
        }
        else if(win_num == 1){
            winner = p1_name;
        }
        else if(win_num == 2){
            winner = p2_name;
        }
        else{
            winner = "tie";
        }
        break;
    }
    cout<<"\n\n";
    printBoard(board);

    cout<<"Game ended! ";    
    if(winner == "tie"){
        cout<<"It was a tie!!!";
    }
    else{
        cout<<"The winner is: "<<winner<<"!!!";
    }
    return 0;
}

void printBoard(char board[3][3]){
    for(int r = 0;r<3;r++){
        cout<<"   |   |\n";
        for(int c = 0;c<3;c++){
            if(c != 2){
                cout<<" "<<board[r][c]<<" |";
                continue;
            }
            cout<<" "<<board[r][c];
            if(r == 2){
                cout<<"\n   |   |   ";
            }
            else{
                cout<<"\n___|___|___";
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
    return false;
}

int* moveToCoord(string move){
    int static coord_array[2]; //static makes sure that array stays
    for(int coord = 0;coord<2;coord++){
        for(int valid = 0;valid<3;valid++){
            if(move[coord] != valid_coord[valid]){
                continue;
            }
            else if(coord == 0){
                coord_array[0] = valid;
            }
            else{
                coord_array[1] = valid;
            }
        }
    }
    return coord_array;
}

bool boardFull(char board[3][3]){
    for(int r = 0;r<3;r++){
        for(int c = 0;c<3;c++){
            if(board[r][c] == '-'){
                return false;
            }
        }
    }
    return true;
}
//returns row of the winning horizontal chain
int checkHorizontalWin(char board[3][3]){
    for(int row = 0;row<3;row++){
        if(board[row][0] == '-'){
            continue;
        }
        else if(board[row][0] == board[row][1] && board[row][0] == board[row][2]){
            return row;
        }
    }
    return -1;
}

//returns column of the winning vertical chain
int checkVerticalWin(char board[3][3]){
    for(int column = 0;column<3;column++){
        if(board[0][column] == '-'){
            continue;
        }
        else if(board[0][column] == board[1][column] && board[0][column] == board[2][column]){
            return column;
        }
    }
    return -1;
}

//returns column of the top mark of the winning diagonal chain
int checkDiagonalWin(char board[3][3]){
    if(board[0][0] != '-' && board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        return 0;
    }
    else if(board[0][2] != '-' && board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        return 2;
    }
    return -1;
}

//returns number of the player that won
int checkWin(char board[3][3]){
    int hor = checkHorizontalWin(board);
    int ver = checkVerticalWin(board);
    int dia = checkDiagonalWin(board);
    if(hor != -1){
        return (board[hor][0] == 'X') ? 1 : 2;
    }
    else if(ver != -1){
        return (board[0][ver] == 'X') ? 1 : 2;
    }
    else if(dia != -1){
        return (board[0][dia] == 'X') ? 1 : 2;
    }
    else if(boardFull(board)){
        return 3;
    }
    return -1;
}