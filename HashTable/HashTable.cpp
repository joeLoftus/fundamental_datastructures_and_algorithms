#include"HashTable.h"
using std::string;

int hasFunc(string s) {
    int h = 0;
    for (size_t i = 0; i < s.length(); i++)
        h += s[i];
    return int(h);
}

HashTable::HashTable() { 
    for (int i = 0; i < TABLE_SIZE; i++)
        entries[i].isTaken = false;
}

Entry* HashTable::lookup(string value) {
    int hash = hasFunc(value);
    int offset = hash % TABLE_SIZE;
    int step = ((hash / TABLE_SIZE) % TABLE_SIZE);
    step |= 1; //if step is odd then it will visit every entry
    
    for (int i = 0; i < TABLE_SIZE; i++) {
        Entry* entry = &entries[offset];
        if (!entry->isTaken)
            return entry;
        if (entry->value == value)
            return entry;

        offset = (offset + step) % TABLE_SIZE;
    }
    return nullptr;
}

bool HashTable::contains(string value) {
    Entry* entry = lookup(value);
    return entry->isTaken;
}

void HashTable::add(string value) {
    Entry* entry = lookup(value);
    if (!entry->isTaken) {
        entry->isTaken = true;
        entry->value = value;
    }
}
void HashTable::remove(string value) {
    Entry* entry = lookup(value);
    if (entry->isTaken) {
        entry->isTaken = false;
    }
}
