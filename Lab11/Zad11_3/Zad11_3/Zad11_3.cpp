#include "BidirectionalList.h"
#include <iostream>

int main()
{
    BidirectionalList<int> bidirectionalList;
    bidirectionalList.pushFront(1);
    bidirectionalList.pushFront(2);
    bidirectionalList.pushBack(3);
    bidirectionalList.pushBack(4);
    bidirectionalList.print();
    bidirectionalList.popBack();
    bidirectionalList.popFront();
    bidirectionalList.popBack();
    bidirectionalList.print();
}

