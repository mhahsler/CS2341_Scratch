#ifndef DSLIST_H
#define DSLIST_H

// DSList.h needs to be added to CMakelists.txt so it is compiled

template <typename Object>
class DSList
{

    struct Node
    {
        Object data;
        Node *next;
    };

    Node *head;

public:
    // Default constructor 
    DSList()
    {
        head = nullptr;
    }

    // Rule of 3: Destructor 
    // Rule of 3: Copy constructor
    // Rule of 3: Copy assignment operator

    // push_front to add an element to the front of the list
    void push_front(const Object &x)
    {
        // 1. allocate new node
        Node *newNode = new Node();
        newNode->data = x;

        // 2. find position: we know it goes right after head

        // 3. link new node
        newNode->next = head;
        head = newNode;
    }

    // empty (this is faster than size == 0)
    bool empty() const
    {
        return (head == nullptr);
    }

    // size

    // front to look at the first element
    // pop_front to remove the first element
    // print (operator<< would be nicer)
};

#endif