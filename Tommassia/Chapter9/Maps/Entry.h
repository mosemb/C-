//
// Created by root on 2017/09/20.
//

#ifndef MAPS_ENTRY_H
#define MAPS_ENTRY_H

template <typename K, typename V>
class Entry {
private:
    K _key;
    V _value;
public:
    Entry(const K&k =K(), const V&v = V());
    const K& getkey()const; // Get Key
    const V& getvalue()const; // Get Value
    void setKey(const K&k);
    void setValue(const V&v);

};




#endif //MAPS_ENTRY_H
