//
// Created by root on 2017/08/17.
//

#ifndef ARRAYSLINKEDLISTSRECUSSION_GAMEENTRY_H
#define ARRAYSLINKEDLISTSRECUSSION_GAMEENTRY_H

#include <string>

using namespace std;


class GameEntry {
private:
    int score;
    string  name;

public:
    ~GameEntry();
    GameEntry(const string &nm = "", const int sc = 0);
    int getScore() const;
    string  getName();

};


#endif //ARRAYSLINKEDLISTSRECUSSION_GAMEENTRY_H
