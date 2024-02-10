// AutoSortedLinkedList.h
#ifndef AUTOSORTEDLINKEDLIST_H
#define AUTOSORTEDLINKEDLIST_H

#include "ListNode.h"
#include <iostream>

// A generic class for a sorted linked list.
template<typename T>
class AutoSortedLinkedList {
private:
    ListNode<T>* head; // Pointer to the first node in the list

public:
    // Constructor initializes the list as empty
    AutoSortedLinkedList() : head(nullptr) {}

    // Destructor to free the memory used by the list
    ~AutoSortedLinkedList() {
        ListNode<T>* current = head;
        while (current != nullptr) {
            ListNode<T>* next = current->next;
            delete current; // Free the current node
            current = next; // Move to the next node
        }
    }

    // Insert a value into the list in sorted order
    void insert(T value) {
        ListNode<T>** current = &head;
        // Find the insertion point (the first node with a value greater than the one being inserted)
        while (*current != nullptr && (*current)->value < value) {
            current = &((*current)->next);
        }
        // Create a new node and insert it at the found position
        *current = new ListNode<T>(value, *current);
    }

    // Search for a value in the list
    bool search(T value) {
        ListNode<T>* current = head;
        while (current != nullptr) {
            if (current->value == value) return true; // Value found
            current = current->next;
        }
        return false; // Value not found
    }

    // Print the values in the list
    void printList() const {
        ListNode<T>* current = head;
        while (current != nullptr) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

#endif // AUTOSORTEDLINKEDLIST_H
