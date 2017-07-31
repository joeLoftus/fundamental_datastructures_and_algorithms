/*///////////////////////////
Hash Table Operations
Search: Average: O(1), Worst Case: O(n)
Insert: Average: O(1), Worst Case: O(n)
Delete: Average: O(1), Worst Case: O(n)
Space: Average: O(n), Worst Case: O(n)

-This is an open addressing and double hashing implementation of a hash table.
-The preceeding time complexities are more appropriate for a more optimal
hash table implementaton, such as seperate chaining
*////////////////////////////

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

