/*///////////////////////////
Linked List Operations
Indexing: O(n)
Insert/delete at beginning: O(1)
Insert/delete at end: O(n), O(1) if doubly linked
Insert/delete in middle: searchtime + O(1)
Average wasted space: O(n)

This is an implementation of a singly linked list.

Merge sort: Average and worst case: O(n log(n))
Quick sort: Worst: O(n^2) Average: O(n log(n))
*////////////////////////////

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

using namespace std; 
#include <iostream>
#include <cstdlib>

class Node
{
public:
    Node *next;
    int data;
};

using namespace std;

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    
    void addToFront(int val);
    int removeFromFront();
    void addToBack(int val);
    int removeFromBack();
    void print();
    
    int getLength(Node* head);
    void mergeSort();
    void mergeSort(Node *&head);
    Node* merge(Node *&head1,Node *&head2);
    
    
    Node* getBack(Node *cur);
    Node* partition(Node *head, Node *end, Node **newHead, Node **newEnd);
    Node* quickSort(Node *head, Node *end);
    void quickSort(Node **headRef);
    void quickSort();

protected:
    Node *front;
};

#endif 