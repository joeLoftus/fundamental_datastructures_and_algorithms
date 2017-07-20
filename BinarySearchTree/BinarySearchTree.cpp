#include"BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(){
    root = NULL;
}

BinarySearchTree::~BinarySearchTree(){
    root = clear(root);
}

Node* BinarySearchTree::insert(int val, Node* t){
    if (t==NULL){
        t = new Node;
        t->data = val;
        t->left = t-> right = NULL;
    }else if (val < t->data)
        t->left = insert(val, t->left);
    else 
        t->right = insert(val, t->right);
    return t;
}

void BinarySearchTree::insert(int val){
    root = insert(val, root);
}

void BinarySearchTree::traverse(Node* t){
    if (t == NULL){
        return;
    }
    traverse(t->left);
    cout << t->data << " ";
    traverse(t->right);
}

void BinarySearchTree::traverse(){
    traverse(root);
    cout << endl;
}

Node* BinarySearchTree::search(int val, Node* t){
    if (t == NULL)
        return NULL;
    else if  (t->data > val)
        search(val, t->left);
    else if (t->data < val)
        search(val, t->right);
    else
        return t;
}

bool BinarySearchTree::search(int val){
    if(search(val, root))
        return true;
    return false;
}

Node* BinarySearchTree::findMin(Node* t){
    if (t->left==NULL)
        return t;
    return findMin(t->left);
}

Node* BinarySearchTree::findMax(Node* t){
    if (t->right==NULL)
        return t;
    return findMax(t->right);
}

Node* BinarySearchTree::remove(int val, Node* t){
    Node* temp;
    if(t == NULL)
        return NULL;
    else if(t->data > val)
        t->left = remove(val, t->left);
    else if(t->data < val)
        t->right = remove(val, t->right);
        
    else if(t->left && t->right)
    {
        temp = findMin(t->right);
        t->data = temp->data;
        t->right = remove(t->data, t->right);
    }
    else if (t->left == NULL)
    {
        temp = t;
        t = t->right;
        delete temp;
    }
    else{
        temp = t;
        t = t->left;
        delete temp;
    }
    return t;
}

void BinarySearchTree::remove(int val){
    root = remove(val, root);
}

Node* BinarySearchTree::clear(Node* t){
    if (t == NULL)
        return NULL;
    if(t->left)
        clear (t->left);
    if(t->right)
        clear (t->right);
    delete t;
    return NULL;
}