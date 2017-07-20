#include"BinarySearchTree.h"

int main(){
    BinarySearchTree tree;
    tree.insert(4);
    tree.insert(3);
    tree.insert(3);
    tree.insert(7);
    
    tree.traverse();
    cout << tree.search(3) << endl;
    
    tree.remove(4);
    tree.remove(7);
    tree.traverse();

    return 0;
}