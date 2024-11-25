#include<iostream>
using namespace std;
int winnerp1 = 0, winnerp2 = 0;
void Play(int player1, int player2){
    int win = 0;
    if(player1 == player2){
        cout<<"Ha Ha its same!"<<endl;
    }else if(player1==1){
        if(player2==2){
            cout<<"Player 2 won!"<<endl;
            win = 2;
        }else if(player2==3){
            cout<<"player 1 won!"<<endl;
            win = 1;
        }
    }else if(player1==2){
        if(player2==1){
            cout<<"Player 1 won!"<<endl;
            win = 1;
        }else if(player2==3){
            cout<<"player 2 won!"<<endl;
            win = 2;
        }
    }else if(player2==3){
        if(player2==1){
            cout<<"Player 2 won!"<<endl;
            win = 2;
        }else if(player2==2){
            cout<<"player 1 won!"<<endl;
            win = 1;
        }
    }
    if(win==1){
        winnerp1++;
    }else if(win==2){
        winnerp2++;
    }
}
void mainGame(int game, int random, int player1, int player2){
    if(game==1){
        cout<<"Player 1: "<<endl;
        cout<<"Rock press 1"<<endl;
        cout<<"paper press 2"<<endl;
        cout<<"Scissor press 3"<<endl;
        cin>>player1;
    }else{
        cout<<"Player 1: "<<endl;
        cout<<"Rock press 1"<<endl;
        cout<<"paper press 2"<<endl;
        cout<<"Scissor press 3"<<endl;
        cout<<random<<endl;
        player1 = random;
    }
    
    cout<<"Player 2: "<<endl;
    cout<<"Rock press 1"<<endl;
    cout<<"paper press 2"<<endl;
    cout<<"Scissor press 3"<<endl;
    cin>>player2;
    
    Play(player1, player2);
}
int main(){
    int player1, player2, playWith, times = 1;
    int random = rand()%3;
    cout<<"Pass and Pass (Press 1) Or Robot (Press 2)"<<endl;
    cin>>playWith;
    cout<<"How many games you want to play: ";
    cin>>times;
    for(int i = 1; i<=times; i++){
        mainGame(playWith, random, player1, player2);
    }
    
    if(winnerp1>winnerp2){
        cout<<"The Player 1 won the game"<<endl;
    }else if(winnerp1<winnerp2){
        cout<<"The Player 2 won the game"<<endl;
    }else{
        cout<<"The game is Draw!!"<<endl;
    }
}