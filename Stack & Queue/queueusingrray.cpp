#include <iostream>
using namespace std;

class ArrayQueue {
private:
    static const int SIZE = 1000; // queue capacity
    int arr[SIZE];
    int front, rear;
    int count; // number of elements

public:
    ArrayQueue() {
        front = 0;
        rear = -1;
        count = 0;
    }

    // Add element at the end
    void push(int x) {
        if (count == SIZE) {
            cout << "Queue is Full! Cannot push " << x << endl;
            return;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
        count++;
        cout << x << " pushed" << endl;
    }

    // Remove and return front element
    int pop() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        int val = arr[front];
        front = (front + 1) % SIZE;
        count--;
        return val;
    }

    // Return front element (without removing)
    int peek() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    // Check if queue is empty
    bool isEmpty() {
        return (count == 0);
    }
};

int main() {
    ArrayQueue q;

    q.push(5);
    q.push(10);
    q.push(15);

    cout << "Front: " << q.peek() << endl;  // Output: 5

    cout << "Popped: " << q.pop() << endl;  // Output: 5
    cout << "Popped: " << q.pop() << endl;  // Output: 10

    cout << "Is Empty? " << q.isEmpty() << endl; // Output: 0 (false)

    cout << "Popped: " << q.pop() << endl;  // Output: 15
    cout << "Popped: " << q.pop() << endl;  // Output: -1 (empty)

    cout << "Is Empty? " << q.isEmpty() << endl; // Output: 1 (true)

    return 0;
}
