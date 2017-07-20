#include<iostream>

using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int data;
};

class BinarySearchTree{
private:
    Node* root;
    
    Node* insert(int val, Node* t);
    void traverse(Node *t);
    Node* search(int val, Node *t);
    Node* clear(Node* t);

    Node* findMin(Node* t);
    Node* findMax(Node* t);
    Node* remove(int val, Node *t);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    void insert(int val);
    void traverse();
    bool search(int val);
    void remove(int val);
};