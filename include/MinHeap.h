#pragma once
#include "Event.h"
class MinHeap {
    Event* eventArray; int size, capacity;
    void heapifyUp(int i);  void heapifyDown(int i);  void resize();
public:
    MinHeap(int cap = 1024);  ~MinHeap();
    void  insertEvent(const Event& e);
    Event extractMin();
    bool  isEmpty() const;
};