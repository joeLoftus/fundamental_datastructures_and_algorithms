#include"ArrayList.h"

int main(){
    ArrayList al;
    al.insert(0,3);
    al.insert(1,5);
    al.insert(2,2);
    al.insert(3,7);
    al.insert(4,4);
    al.remove(3);
    al.remove(0);
    for (int i=0; i< al.getSize() -1; i++){
        cout << al.get(i) << " ";
    }
    return 0;
}