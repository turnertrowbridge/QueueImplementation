//
// Created by Turner on 12/2/22.
//

#ifndef QUEUEIMPLEMENTATION_QUEUE_H
#define QUEUEIMPLEMENTATION_QUEUE_H

#include <iostream>
using namespace std;


class Node {
    int value;
    Node* next;
    explicit Node(int value);
public:
    friend class Queue;
};

class Queue {
    Node* first;
    Node* last;
    int length;
public:
    Queue();
    int peek();
    void enqueue(int value);
    int dequeue();
};


#endif //QUEUEIMPLEMENTATION_QUEUE_H
