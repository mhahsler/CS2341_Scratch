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
    ~DSList() {
        while(!empty())
            pop_front();
    }

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
    size_t size() const
    {
        // consider special case of empty list!!! is OK
        
        size_t size = 0;
        Node* current = head;

        while(current != nullptr) {
            size++;
            current = current->next;
        }

        return(size);
    }


    // front to look at the first element
    const Object& front() const 
    {
        return (head->data);
    }

    // pop_front to remove the first element
    void pop_front() 
    {
        // 1. find location (no work for front)

        // 2. unlink node
        Node* old_head = head;
        head = head->next;
        
        // 3. deallocate node
        delete old_head;
    }

    // print (operator<< would be nicer)
    void print() const
    {
        Node* current = head;

        while(current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }

        std::cout << "\n";
    }
};

#endif