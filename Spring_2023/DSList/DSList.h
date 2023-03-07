#ifndef DSLIST_H
#define DSLIST_H

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
    // Constructor (The rule of 3)

    DSList()
    {
        head = nullptr;
    }

    // Destructor
    // Copy Constr.
    // Copy assignment operator.

    // push_front
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

    // empty
    bool empty() const
    {
        return (head == nullptr);
    }

    // size

    // front
    // pop_front
    // print
};

#endif