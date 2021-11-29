#include "SortedList.h"
using namespace std;

SortedList::SortedList(int c)
{
    this->cap = c;
    this->head = 0;
    listArray = new int[c];
}

SortedList::~SortedList()
{
    
}


void SortedList::deleteEntryIndex(int index){
    if (index < head) {
        for (int i = index; i < head; i++){
            listArray[i] = listArray[i + 1];
        }
        head --; 
    }
}

void SortedList::deleteEntryNumber(int number){
    int entryIndex = 0;
    for (int i = 0; i < head; i++) {
        if (listArray[i] == number){
            entryIndex = i;
            break;
        }
    }
    deleteEntryIndex(entryIndex);
}

void SortedList::insertEntry(int newEntry){
    int entryIndex = 0;
    if (head == cap) {
        int* newListArray = new int[cap * 2];
        for (int i = 0; i < cap; i++)
        {
            newListArray[i] = listArray[i];
        }
        delete[] listArray;
        listArray = newListArray;
        
        
    }
    for (int i = 0; i < head; i++) {
        if (newEntry < listArray[i]) { // if newEntry is < any entry in listArray
            entryIndex = i;
            break;
        } else if (i == head - 1) { // newEntry is largest entry in listArray
            entryIndex = head;
        }
    }
    for (int i = head - 1; i >= entryIndex; i--)
    {
        listArray[i + 1] = listArray[i];
    }

    listArray[entryIndex] = newEntry;
    
    head++;

    
}

void SortedList::print(){
    cout << "[";
    for (int i = 0; i < head; i++) {
        if (i != head - 1) { // print until i is at second last element
            cout << listArray[i];
            cout << ", ";
        } 
        else {
            cout << listArray[i]; // print without the ","
        }
    }
    cout << "]" << endl;
}
