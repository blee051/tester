#include <iostream>
#include <vector>
using namespace std;

struct IntNode {
    int data;
    IntNode* next;
    IntNode(int data) : data(data), next(0) {}
};

class myList {
  private:
    IntNode* head;
    IntNode* tail;
  public:
    myList();
    myList( int );
    myList( const myList & x );
    void push_back( int );
    void print() const;
};

myList::myList() 
 : head(0), tail(0)
{}

myList::myList( int x ) {
    IntNode* temp = new IntNode(x);
    head = temp;
    tail = temp;
}

myList::myList( const myList & x ): head(0), tail(0) {
    cout <<" Copy Constructor was called " << endl;
    for( IntNode* curr = x.head; curr != 0; curr = curr->next ) {
        cout << " For loop is being used " << endl;
        // 
        cout << " End of for loop " << endl;
    }
    cout << " End of function " << endl;
}

void myList::push_back( int x ) {
    IntNode *temp = new IntNode( x );
    if( head == 0 ) {
        head = temp;
        tail = temp;
    }
    else {
        tail->next = temp;
        tail = tail->next;
    }
}

void myList::print() const {
    for( IntNode* temp = head; temp != 0; temp = temp->next ) {
        cout << temp->data << " ";
    }
    cout << endl;
}

int main() {
    myList test;
    test.push_back(11);
    test.print();
    myList list1(test);
    list1.print();
    
    return 0;
}