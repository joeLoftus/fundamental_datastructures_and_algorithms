#include"Trie.h"

Trie::Trie(){
}

Trie::~Trie() {
  for (int i=0; i<children.size(); ++i) {
    delete children[i];
  }
}

void Trie::create(string words[], int length) {
  for (int i=0; i<length; ++i) {
    insert(words[i]);
  }
}

void Trie::insert(string word) {
  map<char, Node*> *tree = &root.children;
  map<char, Node*>::iterator iter;

  for (int i=0; i<word.length(); ++i) {
    char ch = word[i];

    if ((iter = tree->find(ch)) != tree->end()) {
      tree = &iter->second->children;
    }

    if (iter == tree->end()) {
      Node* temp = new Node();
      temp->ch = ch;
      (*tree)[ch] = temp;

      // For continuous inserting a word.
      tree = &temp->children;
      
      // For the ease of memory clean up.
      children.push_back(temp);
    }
  }
}

bool Trie::search(string word) {
  map<char, Node*> tree = root.children;
  map<char, Node*>::iterator iter;

  for (int i=0; i<word.length(); ++i) {
    if ((iter = tree.find(word[i])) == tree.end()) {
      return false;
    }
    tree = iter->second->children;
  }

  return true;
}

void Trie::print(map<char, Node*> tree) {
  if (tree.empty()) {
    return;
  }

  for (map<char, Node*>::iterator iter=tree.begin(); iter!=tree.end(); ++iter) {
    cout << iter->first << endl;
    print(iter->second->children);
  }
}

void Trie::print() {
  print(root.children);
}