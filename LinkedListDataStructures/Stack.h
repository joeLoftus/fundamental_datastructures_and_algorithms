/*///////////////////////////
Stack Operations (for this implementation)
pop: O(1) (Add to front)
push: O(1) (Remove from front)
*////////////////////////////

#include"LinkedList.h"

using namespace std;

class Stack: public LinkedList{
    public:
        Stack();
        ~Stack();
        
        void push(int val);
        int pop();
};