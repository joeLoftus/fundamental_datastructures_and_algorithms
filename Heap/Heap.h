/*///////////////////////////
Binary Heap time complexities
delete-min: O(log n)
insert: O(log n)
decrease-key: O(log n)

The following is a min heap that implements a priority queue.
*////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

class Heap {
public:
    Heap();
    void insert(int element);
    int deleteMin();
    void print();
    int size();
private:
    int left(int parent);
    int right(int parent);
    int parent(int child);
    void bubbleUp(int index);
    void bubbleDown(int index);
private:
    vector<int> heap;
};
