//
// Created by root on 2017/08/17.
//

#include "Scores.h"
#include <iostream>



Scores::Scores(int mE) {
    maxEntries = mE;
    entries = new GameEntry[maxEntries]; // Array to store entries
    numEntries = 0;

}

Scores::~Scores() {
    delete [] entries;
}

void Scores::addEntry(const GameEntry &e) {
    int newScore = e.getScore();
    if(numEntries == maxEntries){
        if(newScore <= entries[maxEntries-1].getScore())
            return;
    }
    else numEntries++;

    int i = numEntries-2;
    while (i>=0 && newScore>entries[i].getScore()){
        entries[i+1] = entries[i];
        i--;
    }

    entries[i+1] = e;

}

GameEntry Scores::remove(int i) {
    try {
        if(i<0||i>=numEntries-1){
            throw 0;
        } else{
            GameEntry e = entries[i];
            for(int j = i+1; j<numEntries; j++){
                entries[j-1] = entries[j];
            }
            numEntries--;
            return e;
        }
    }catch(...){
        cout << "You cant have i < 0 or i greater or equal to numEntries";
    }
}