#include"Queue.h"

Queue::Queue(){
    LinkedList();
}

Queue::~Queue(){
    clear();
}

void Queue::enqueue(int val){
    addToBack(val);
}


int Queue::dequeue(){
     return removeFromFront();
 }
