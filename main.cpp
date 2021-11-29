#include <iostream>
#include "SortedList.h"

using namespace std;

int main() {
    cout << "Enter how many integers you want in the list" << endl;
    int cap = 0;
    cin >> cap;
    SortedList list(cap);
    for (int i = 0; i < cap; i++)
    {
        cout << "Enter integer you'd like to insert into the list: " << flush;
        int entry;
        cin >> entry;
        list.insertEntry(entry);
    }
    list.print();

    cout << "Enter amount of integers you'd like to delete" << endl;
    int amount = 0;
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        int number = 0;
        cout << "What number would you like to delete: " << flush;
        cin >> number;
        list.deleteEntryNumber(number);
    }
    list.print();
    
    return 0;
}
