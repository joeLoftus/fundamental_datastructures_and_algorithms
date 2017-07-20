#include"Graph.h"

Graph::Graph(int verts){
    vertices = verts;
    arr = new AdjList[vertices];
    for(int i=0;i<vertices;i++){
        arr[i].head=NULL;
    }
}

void Graph::addEdge(int source, int destination){
    Node* temp = new Node;
    temp->data = destination;
    temp->next= arr[source].head;
    arr[source].head=temp;

    Node* temp2 = new Node;
    temp2->data = source;
    temp2->next=arr[destination].head;
    arr[destination].head=temp2;
}

void Graph::print(){
    for(int i=0;i<vertices;i++){
        Node *root=arr[i].head;
        cout<<"Adjacency list for vertex "<<i<< ":" << endl;
        while(root!=NULL){
            cout<<root->data<<" -> ";
            root=root->next;
        }
        cout<<endl;
    }
}