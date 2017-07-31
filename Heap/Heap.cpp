#include"Heap.h"

Heap::Heap()
{
}


void Heap::insert(int element)
{
    heap.push_back(element);
    bubbleUp(heap.size() - 1);
}

int Heap::deleteMin()
{
    int min = heap.front();
    heap[0] = heap.at(heap.size() - 1);
    heap.pop_back();
    bubbleDown(0);
    return min;
}

void Heap::print()
{
    vector<int>::iterator iter = heap.begin();
    while ( iter != heap.end() ) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
}

int Heap::size()
{
    return heap.size();
}

void Heap::bubbleUp(int index)
{    
    while ( ( index > 0 ) and ( parent(index) >= 0 ) and ( heap[parent(index)] > heap[index] ) )
    {
        int tmp = heap[parent(index)];
        heap[parent(index)] = heap[index];
        heap[index] = tmp;
        index = parent(index);
    }
}

void Heap::bubbleDown(int index)
{     
    int child = left(index);
    if ( ( child > 0 ) and ( right(index) > 0 ) and( heap[child] > heap[right(index)] ) )
    {
        child = right(index);
    }
    if ( child > 0 )
    {
        int tmp = heap[index];
        heap[index] = heap[child];
        heap[child] = tmp;
        bubbleDown(child);
    }
}

int Heap::left(int parent)
{
    int i = ( parent * 2) + 1;
    return ( i < heap.size() ) ? i : -1;
}

int Heap::right(int parent)
{
    int i = ( parent * 2) + 2; 
    return ( i < heap.size() ) ? i : -1;
}

int Heap::parent(int child)
{
    if (child != 0)
    {
        int i = (child - 1) * 0.5;
        return i;
    }
    return -1;
}