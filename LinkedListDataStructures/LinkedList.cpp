#include "LinkedList.h"

LinkedList::LinkedList(){
    front = NULL;
}

LinkedList::~LinkedList(){
    clear();
}

void LinkedList::addToFront(int val){
	Node* temp = new Node;
	temp->data = val;
	
    if (!front)
    {
        temp->next = NULL;
    	front = temp;
    }
    else
    {
        temp->next = front;
    	front = temp;
    }
}

int LinkedList::removeFromFront(){
    int removedVal =0;
    if (front)
    {
        Node* temp = front;
        front = front->next;
        removedVal = temp->data;
        delete temp;
        temp = NULL;
    }
    return removedVal;
}

void LinkedList::addToBack(int val){ 
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;

    if(!front) 
    { 
        front = temp;
        return;
    } 
    else
    {
        Node* back = front;
        while(back->next)
            back=back->next;
        back->next = temp;
    }
}

int LinkedList::removeFromBack(){
    int removedVal;
    if (!front->next) {
        removedVal = front->data;
        delete front;
        front = NULL;
    }
    else {
        Node* temp = front;
        Node* back = front->next;
        while (back->next) {
            temp = back;
            back = back->next;
        }
        removedVal = back->data;
        temp->next = NULL;
        delete back;
        
    }
    return removedVal;
}

void LinkedList::clear(){
    Node* temp = front;
    while (front){
        temp = front;
        delete temp;
        front = front->next;
    }
    delete front;
}

int LinkedList::getLength(Node *head){
	int count = 0;
	for(Node* cur = head;cur!=NULL;cur=cur->next){
		count += 1;
	}
	return count;
}

Node* LinkedList::merge(Node *&head1,Node *&head2){
	Node* newHead;
	if(!head1) 
	    return head2;
	else if(!head2) 
	    return head1;
	
	if(head1->data < head2->data){
		newHead = head1;							
		newHead->next = merge(head1->next,head2);
	}
	else{
		newHead = head2;
		newHead->next = merge(head1,head2->next);
	}
	
	return newHead;
}

void LinkedList::mergeSort(Node *&head){
	if(head->next)
	{
		Node* head1;
		Node* head2 = head;	
		int len = getLength(head);
		for(int i=0; i<len/2;i++)
		{      
			head1 = head2;			 
			head2 = head2->next;	
		}
		head1->next = NULL;			
		head1 = head;			
		mergeSort(head1);
		mergeSort(head2);
		head = merge(head1,head2);
	}
}

void LinkedList::mergeSort(){
     mergeSort(front);
}

Node* LinkedList::getBack(Node *cur)
{
    while (cur != NULL and cur->next != NULL)
        cur = cur->next;
    return cur;
}

Node* LinkedList::partition(Node *head, Node *end, Node **newHead, Node **newEnd)
{
    Node *pivot = end;
    Node *prev = NULL, *cur = head, *back = pivot;
 
    while (cur != pivot)
    {
        if (cur->data < pivot->data)
        {
            if (!*newHead)
                *newHead = cur;
 
            prev = cur;  
            cur = cur->next;
        }
        else
        {
            if (prev)
                prev->next = cur->next;
            Node *temp = cur->next;
            cur->next = NULL;
            back->next = cur;
            back = cur;
            cur = temp;
        }
    }
    if (!*newHead)
        *newHead = pivot;

    *newEnd = back;
    return pivot;
}

Node* LinkedList::quickSort(Node *head, Node *end)
{
    if (!head or head == end)
        return head;
 
    Node *newHead = NULL, *newEnd = NULL;
    Node *pivot = partition(head, end, &newHead, &newEnd);

    if (newHead != pivot)
    {
        Node *temp = newHead;
        while (temp->next != pivot)
            temp = temp->next;
        temp->next = NULL;
        
        newHead = quickSort(newHead, temp);
        temp = getBack(newHead);
        temp->next =  pivot;
    }
    pivot->next = quickSort(pivot->next, newEnd);
    return newHead;
}
 
void LinkedList::quickSort(Node **head)
{
    *head = quickSort(*head, getBack(*head));
    return;
}

void LinkedList::quickSort(){
    quickSort(&front);
}

void LinkedList::print(){
    cout << "The list: " ;
    Node* temp = front;
    while (temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}