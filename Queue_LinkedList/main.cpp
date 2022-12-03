#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue queue;

    cout << queue.dequeue() << endl;
    cout << queue.peek() << endl;

    queue.enqueue(1);
    cout << queue.dequeue() << endl;
    cout << queue.dequeue() << endl;

    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    cout << queue.peek() << endl; // returns 2
    cout << queue.dequeue() << endl; // returns 2
    cout << queue.peek() << endl; // returns 3
    cout << queue.dequeue() << endl; // returns 3
    cout << queue.peek() << endl; // returns 4
    cout << queue.dequeue() << endl; // returns 4



    return 0;
}
