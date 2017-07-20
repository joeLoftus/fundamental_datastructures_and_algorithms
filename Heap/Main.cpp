#include"Heap.h"

int main()
{
    Heap myheap;
    myheap.insert(3);
    myheap.print();
    myheap.insert(4);
    myheap.print();
    myheap.insert(0);
    myheap.print();
    myheap.insert(8);
    myheap.print();
    myheap.insert(2);
    myheap.print();
    myheap.insert(2);
    myheap.print();

    int heapSize = myheap.size();
    for ( int i = 0; i < heapSize; i++ )
        cout << myheap.deleteMin() << endl;
}