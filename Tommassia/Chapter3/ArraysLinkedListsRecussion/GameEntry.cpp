//
// Created by root on 2017/08/17.
//

#include "GameEntry.h"

GameEntry::~GameEntry() {}
GameEntry::GameEntry(const string &nm, const int sc) :name(nm) , score(sc) {

}

int GameEntry::getScore()const {
    return score;
}

string GameEntry::getName() {
    return name;
}
