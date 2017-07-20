#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

struct Node {
  char ch;
  map<char, Node*> children;
};

class Trie {
  public:
    Trie();
    ~Trie();

    void create(string words[], int length);
    void insert(string word);
    bool search(string word);

    void print(map<char, Node*> tree);
    void print();

  private:
    Node root;
    vector<Node*> children;
};