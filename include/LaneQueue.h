#pragma once
#include "Vehicle.h"
struct QueueNode { Vehicle* vehicle; QueueNode* next; };
class LaneQueue {
    QueueNode *front, *rear; int count;
public:
    LaneQueue();  ~LaneQueue();
    void enqueue(Vehicle* v);
    Vehicle* dequeue();
    Vehicle* peek() const;
    bool isEmpty() const;
    int  size() const;
    void display() const;
};