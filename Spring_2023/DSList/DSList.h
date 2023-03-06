#ifndef DSLIST_H
#define DSLIST_H

template <typename Object>
class DSList {

    struct Node
        {
            Object data;
            Node *next;
        };

Node* head;

public:
// Constructor (The rule of 3)

DSList() {
    head = nullptr;
}

// Destructor
// Copy Constr.
// Copy assignment operator.


//push_front
void push_front(const Object& x) {
    // allocate
    Node* newNode = new Node();
    newNode->data = x;
    // find: we know it goes right after head
    // link
    newNode->next = head;
    head = newNode;
}

//empty
bool empty() const {
    retrun (head == nullptr);   
}


//size

//front
//pop_front
//remove
//print


};




#endif