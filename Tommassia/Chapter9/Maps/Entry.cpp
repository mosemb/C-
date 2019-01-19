//
// Created by root on 2017/09/20.
//

#include <typeindex>
#include "Entry.h"
template<typename K, typename V>
Entry<K,V>::Entry(const K &k, const V &v) :_key(k), _value(v){

}

template<typename K, typename V>
const K &Entry<K,V>::getkey() const {
    return _key;
}

template<typename K, typename V>
const V &Entry<K,V>::getvalue() const {
    return _value;
}

template<typename K, typename V>
void Entry<K,V>::setKey(const K &k) {
    return _key=k;

}

template<typename K, typename V>
void Entry<K,V>::setValue(const V &v) {
    return _value =v;
}




