#include "Queue.h"
#include "Stack.h"

int main()
{
    LinkedList l;
    l.addToFront(23);
    l.addToFront(2);
    l.addToFront(3);
    l.addToFront(456);
    l.addToFront(54);
    l.print();
    l.quickSort();
    l.print();
    l.addToFront(123);
    l.removeFromBack();
    l.print();
    l.mergeSort();
    l.print();
    
    Queue q;
    q.enqueue(2);
    q.enqueue(23);
    q.enqueue(3);
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    q.dequeue();
    q.print();

    Stack s;
    s.push(3);
    s.push(0);
    s.push(4);
    s.push(1);
    s.print();
    s.pop();
    s.print();
}
