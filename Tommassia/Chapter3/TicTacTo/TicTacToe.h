//
// Created by root on 2017/08/23.
//

#ifndef TICTACTO_TICTACTOE_H
#define TICTACTO_TICTACTOE_H


class TicTacToe {
private:
    char board [3][3];


public:
    ~TicTacToe();
    TicTacToe();

    void playGame();
    void printBoard();
    void clearBoard();
    int getXcord();
    int getYcord();
    bool placemarker(int x , int y);





};


#endif //TICTACTO_TICTACTOE_H
