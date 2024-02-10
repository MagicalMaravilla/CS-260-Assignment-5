// ListNode.h
#ifndef LISTNODE_H
#define LISTNODE_H

// A generic ListNode structure for the linked list.
template<typename T>
struct ListNode {
    T value; // The value stored in the node
    ListNode* next; // Pointer to the next node in the list

    // Constructor to initialize the node with a value and optionally the next node pointer
    ListNode(T val, ListNode* nextNode = nullptr) : value(val), next(nextNode) {}
};

#endif // LISTNODE_H
