#include "AutoSortedLinkedList.h"
#include <cassert>
#include <iostream>

void testAutoSortedLinkedList() {
    AutoSortedLinkedList<int> list;

    // Test insertion
    list.insert(5);
    list.insert(3);
    list.insert(7);
    std::cout << "List after insertions: ";
    list.printList(); // Should print "3 5 7"

    // Test search
    assert(list.search(5) == true); // Value exists
    assert(list.search(4) == false); // Value does not exist
    std::cout << "Test passed: Search verification." << std::endl;
}

int main() {
    testAutoSortedLinkedList();
    return 0;
}
