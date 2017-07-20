#include"LinkedList.h"

using namespace std;

class Queue: public LinkedList{
public:
    Queue();
    ~Queue();
    
    void enqueue(int val);
    int dequeue();
    
};