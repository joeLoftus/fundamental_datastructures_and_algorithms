/*///////////////////////////
Dynamic Array Operations
Indexing: O(1)
Insert/delete at beginning: O(n)
Insert/delete at end: O(1) amortized
Insert/delete in middle: O(n)
Average wasted space: O(n)
*////////////////////////////

#include<iostream>

using namespace std;

class ArrayList {

public:
  ArrayList();
  ArrayList(int size);

  void insert(int index, int val); 
  void remove(int index);
  int get(int index);  
  int getSize();
  
private:
  int arraySize;  
  int desiredSize;
  int *array;
  void resize(float halfOrDouble);
};