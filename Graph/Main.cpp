#include"Graph.h"

int main(){
    int numVertices=4;
    Graph graph(numVertices);
    graph.addEdge(0,2);
    graph.addEdge(0,3);
    graph.addEdge(2,3);
    graph.addEdge(1,3);
    graph.print();
}