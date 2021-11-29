#ifndef SORTEDLIST_H
#define SORTEDLIST_H
#include <iostream>

class SortedList
{
    private:
        int* listArray;
        int cap;
        int head;

    public:
        SortedList(int c);
        virtual ~SortedList();
        void insertEntry(int newEntry);
        void deleteEntryIndex(int index);
        void deleteEntryNumber(int number);
        void print();


    protected:

};

#endif // SORTEDLIST_H
