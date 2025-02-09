#include<bits/stdc++.h>
#include"hash-table.hpp"
using namespace std;

static ht_item* map1(int k,char * v){
    ht_item *i = new ht_item;
    i->key = &k;
    i->value = v;
    return i;
}
ht_hash_table* ht_new() {
    ht_hash_table* ht = new ht_hash_table;
    ht->size = 53;
    ht->count = 0;
    ht->items = new ht_item*;
    return ht;
}

int main(){
    int i = 0;
    char str[50] = "Nikhil Patidar";
    ht_hash_table * myhash = ht_new();
    for(i = 0;i < 5;i++){
        map1(i,&str[i+5]);
    }
    for(int i = 0;i < 5;i++){
        cout << ((myhash->items[i])->value);
    }    
}