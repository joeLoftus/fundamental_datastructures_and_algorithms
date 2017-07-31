/*///////////////////////////
Queue Operations (for this implementation)
enqueue: O(n) (Add to back)
dequeue: O(1) (Remove from front)
*////////////////////////////

#include"LinkedList.h"

using namespace std;

class Queue: public LinkedList{
public:
    Queue();
    ~Queue();
    
    void enqueue(int val);
    int dequeue();
    
};