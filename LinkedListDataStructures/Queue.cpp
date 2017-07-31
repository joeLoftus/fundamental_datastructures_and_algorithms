#include"Queue.h"

Queue::Queue(){
    LinkedList();
}

Queue::~Queue(){
}

void Queue::enqueue(int val){
    addToBack(val);
}


int Queue::dequeue(){
     return removeFromFront();
 }
