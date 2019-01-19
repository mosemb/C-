//
// Created by root on 2017/08/23.
//

#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe::~TicTacToe() {}

TicTacToe::TicTacToe() {

}

void TicTacToe::playGame() {
    char player1 = 'X';
    char player2 = 'Y';
    char currentPlayer = 'X';
    bool isDone = false;

    while(isDone==false){

        printBoard();
        int x , y;

        x = getXcord();
        y= getYcord();

    }
}

bool TicTacToe::placemarker(int x, int y) {

}

int TicTacToe::getXcord() {
    int x;
    cout << "Enter the X cord";
    cin >> x ;
    return x ;

}

int TicTacToe::getYcord() {
    int y;
    cout << "Enter Y cord ";
    cin >> y;
    return y;
}

void TicTacToe::clearBoard() {
    for(int i =0 ; i < 3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            board[i][j] = ' ';

        }
    }
}

void TicTacToe::printBoard() {
    cout << " |1 2 3 | \n";
    for(int i = 0 ; i < 3 ; i++){
        cout << "_______\n";
        cout << i+1 << "|" << board[i][0]  << "|" << board[i][1] << "|" << board[i][2] << "|\n";
    }
    cout << endl;

}




