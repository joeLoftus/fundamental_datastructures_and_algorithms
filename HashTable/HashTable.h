#include<iostream>
using namespace std;

struct Entry {
    bool isTaken;
    string value;
};

class HashTable {
public:
    HashTable();
    Entry* lookup(string value);
    bool contains(string value);
    void add(string value);
    void remove(string value);
private:
    static const int TABLE_SIZE = 256;
    Entry entries[TABLE_SIZE]; 
};

//OPEN ADDRESSING AND DOUBLE HASHING