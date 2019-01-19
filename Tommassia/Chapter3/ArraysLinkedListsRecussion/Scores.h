//
// Created by root on 2017/08/17.
//

#ifndef ARRAYSLINKEDLISTSRECUSSION_SCORES_H
#define ARRAYSLINKEDLISTSRECUSSION_SCORES_H

#include "GameEntry.h"
#include <exception>
#include <stdexcept>

using namespace std;

class Scores {
private:
    int numEntries;
    int maxEntries;
    GameEntry * entries;

public:
    ~Scores();
    Scores(int mE =10 );
    void addEntry(const GameEntry & e);
    GameEntry remove(int i);


};


#endif //ARRAYSLINKEDLISTSRECUSSION_SCORES_H
