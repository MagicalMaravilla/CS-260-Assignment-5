// AutoSortedList.cpp
#include "AutoSortedList.h"
#include <iostream>

void AutoSortedList::insert(int value) {
    data.push_back(value);
    std::sort(data.begin(), data.end());
}

bool AutoSortedList::isListEqual(const std::vector<int>& expected) const {
    return data == expected;
}

void AutoSortedList::printList() const {
    for (int val : data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}
