#include"Stack.h"

Stack::Stack(){
    LinkedList();
}

Stack::~Stack(){
}

void Stack::push(int val){
    addToFront(val);
}

int Stack::pop(){
    return removeFromFront();
}