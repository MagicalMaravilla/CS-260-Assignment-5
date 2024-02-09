// main.cpp
#include "AutoSortedList.h"
#include <cassert>
#include <iostream>

void testInsertionAndOrder() {
    AutoSortedList list;

    list.insert(5);
    assert(list.isListEqual({5})); // Verify list contains [5]

    list.insert(3);
    assert(list.isListEqual({3, 5})); // Verify list is sorted as [3, 5]

    std::cout << "Test passed: Insertion and order verification." << std::endl;
}

int main() {
    testInsertionAndOrder();
    return 0;
}
