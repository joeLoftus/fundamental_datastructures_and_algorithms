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
    void clear();
    
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