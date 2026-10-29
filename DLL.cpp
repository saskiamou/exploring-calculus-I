#include "DLL.h"

// linked list search structure starts at head node.
//  Search moves to next node, compares again. Null if no matches

// list constructor
struct Node list;

// Append class item
ListAppend(list, dataValue) {
    // Initialize dataValue as new node
    newNode = dataValue;
    ListAppendNode(list, newNode);
}

ListAppendNode(list, newNode) {
    if (list->head == null) {
        list->head = newNode;
        list->tail = newNode;
    }
    else {
        list->tail->next = newNode;
        newNode->prev = list->tail;
        list->tail = newNode;
    }
}

// Search class item
ListSearch(list, dataValue) {
    curentNode = list->head
    while (currentNode != null) {
        if (currentNode-> == dataValue) {
            return currentNode
        }    
        currentNode = currentNode->next
        }
        return null
    }