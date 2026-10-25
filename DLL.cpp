// linked list search structure starts at head node. Search moves to next node, compares again. Null if no matches
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