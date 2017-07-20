#include"Trie.h"

int main()
{
  string words[] = {"test", "word", "tent", "wordz"};
  Trie trie;
  trie.create(words, 4);
  trie.print();
  cout << "test " << trie.search("test") << endl;
  cout << "word " << trie.search("word") << endl;
  cout << "tent " << trie.search("tent") << endl;
  cout << "wordz " << trie.search("wordz") << endl;;
  cout << "notintrie " << trie.search("notintrie") << endl;;

  return 0;
}