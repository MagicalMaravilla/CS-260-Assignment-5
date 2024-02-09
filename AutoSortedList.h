// AutoSortedList.h
#ifndef AUTOSORTEDLIST_H
#define AUTOSORTEDLIST_H

#include <vector>
#include <algorithm>

class AutoSortedList {
private:
    std::vector<int> data;

public:
    void insert(int value);
    bool isListEqual(const std::vector<int>& expected) const;
    void printList() const;
};

#endif // AUTOSORTEDLIST_H
