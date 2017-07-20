#include <iostream>
#include <vector>
using namespace std;

class Heap {
public:
    Heap();
    void insert(int element);
    int deleteMin();
    void print();
    int size() { return heap.size(); }
private:
    int left(int parent);
    int right(int parent);
    int parent(int child);
    void bubbleUp(int index);
    void bubbleDown(int index);
private:
    vector<int> heap;
};

//PRIORITY QUEUE