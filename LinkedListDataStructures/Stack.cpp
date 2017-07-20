#include"Stack.h"

Stack::Stack(){
    LinkedList();
}

Stack::~Stack(){
    clear();
}

void Stack::push(int val){
    addToFront(val);
}

int Stack::pop(){
    return removeFromFront();
}