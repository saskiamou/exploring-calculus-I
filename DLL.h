#ifndef DLL_H
#define DLL_H

// DLL header file initializes functions and data members
// item to be stored per node: class
class DLL {
// private implementation - encapsulation
private:
    struct Node {
        // dataType [instance of a class], will use template
        Node *prev;
        Node *next;

        // parameterized Node constructor initializes variables before body
        Node(/*dataType*/) : /*data(type)*/, prev(nullptr), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    int size;

public:
    // class constructor/destructor
    DLL();
    ~DLL();

    // Node functions
    ListAppend(list, newNode) {}
    ListAppendNode(list, dataValue) {}
    ListSearch(list, dataValue) {}

};

#endif