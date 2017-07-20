#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class AdjList{
public:
    Node *head;  
};

class Graph{
public:
    Graph(int verts);
    
    void addEdge(int source, int destination);
    void print();
private:
    int vertices;
    AdjList *arr;
};