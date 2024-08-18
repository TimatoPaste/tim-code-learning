#include <iostream>
#include <string>
#include <cstdlib> //included when including iostream but just for good practice
#include <ctime> //time library

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string player;
    string opponent;
    int playerScore = 0;
    int opponentScore = 0;
    string rps[] = {"rock","paper","scissors"};

    while(true){
        cout<<"Enter rock, paper, or scissors.\n";
        getline(cin,player);//stores value from cin in the player string var

        srand((unsigned int)time(NULL));//gives the rand() function a random seed based on time
        if(player != "rock" && player != "paper" && player != "scissors"){
            break;
        }

        opponent = rps[rand() % 3];

        if(player == opponent){
            playerScore++;
            opponentScore++;
        }
        else if(player == "rock"){
            if(opponent == "scissors") playerScore++; //can write if-else statements inline if the expression is one line
            else if(opponent == "paper") opponentScore++;
        }
        else if(player == "paper"){
            if(opponent == "rock") playerScore++;
            else if(opponent == "scissors") opponentScore++;
        }
        else if(player == "scissors"){
            if(opponent == "paper") playerScore++;
            else if(opponent == "rock") opponentScore++;
        }
        cout<<"player: "<<playerScore<<endl;
        cout<<"opponent: "<<opponentScore<<endl;
    }
    cout<<endl;
    if(playerScore > opponentScore){
        cout<<"player wins!";
    }
    else if(playerScore < opponentScore){
        cout<<"opponent wins!";
    }
    else{
        cout<<"it's a tie!";
    }

    return 0;
}