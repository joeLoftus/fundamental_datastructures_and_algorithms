#include"HashTable.h"

int main(){
    HashTable h;
    h.add("the string");
    cout << h.contains("different string") << endl;
    cout << h.contains("the string") << endl;
    cout << h.lookup("the string")->value << endl;
    h.remove("the string");
    cout << h.contains("the string") << endl;
    return 0;
}