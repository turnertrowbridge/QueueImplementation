//
// Created by Turner on 12/2/22.
//

#include "Queue.h"


Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
}

Queue::Queue() {
    first = nullptr;
    last = nullptr;
    length = 0;
}

// peek at the front of the queue
int Queue::peek(){
    if(length == 0){
        cout << "No values in queue, returning -1" << endl;
        return -1;
    }

    int value = first->value;

    return value;
}

// add value to back of the queue
void Queue::enqueue(int value) {
    Node* newNode = new Node(value);

    if(first == nullptr){
        first = newNode;
        last = newNode;
        length++;
    }else {
        last->next = newNode;
        last = newNode;
    }
    length++;
}

// deletes first value in queue and returns the value, makes next value in queue the first value
int Queue::dequeue() {

    if(first == nullptr){
        cout << "No values in queue, returning -1" << endl;
        return -1;
    }

    Node* firstNode = first;
    int value = firstNode->value;
    first = firstNode->next;

    if(first == last){
        last = nullptr;
    }

    delete firstNode;
    length--;

    return value;
}

