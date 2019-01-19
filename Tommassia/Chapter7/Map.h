//
// Created by root on 2017/09/29.
//

#ifndef CHAPTER7_MAP_H
#define CHAPTER7_MAP_H

template<typename K, typename V>
class Map {
private:
public:
    class Entry;
    class Iterator;
    int size() const;
    bool empty()const;
    Iterator find(const K&k)const;// Find key k
    Iterator put(const K&k, const V&v); // insert and replace values
    void erase(const K&k); // delete key but throw exception if does not exist
    void erase(const Iterator&p); //Erase entry at P
    Iterator begin(); // Iterator at first element
    Iterator end(); // Iterator at last element
};


#endif //CHAPTER7_MAP_H
