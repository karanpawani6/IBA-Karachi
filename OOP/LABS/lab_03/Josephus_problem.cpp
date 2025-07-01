#include <iostream>
#include <string>
#include <cassert>

using namespace std;

class RAQueue {
private:
    int sz; // denotes the number of elements in the queue
    int cap; // denotes the capacity of the queue
    int front; // index of the front element
    int rear; // index of the rear element
    int* arr = nullptr;

public:
    RAQueue() : sz{ 0 }, cap{ 2 }, front{ 0 }, rear{ 0 }, arr{ new int[cap] } {}

    ~RAQueue() {
        delete[] arr;
    }

    void enqueue(int item) {
        if (sz == cap) resize(2 * cap); // double the capacity if the queue is full
        arr[rear] = item;
        rear = (rear + 1) % cap;
        ++sz;
    }

    int dequeue() {
        assert(sz > 0); // queue must not be empty
        int item = arr[front];
        front = (front + 1) % cap;
        --sz;
        if (sz > 0 && sz == cap / 4) resize(cap / 2); // halve the capacity if the queue is 1/4 full
        return item;
    }
    bool empty() const { return sz == 0; }

    int size() const { return sz; }

private:
    void resize(int newcap) {
        assert(newcap >= sz); // new capacity must be greater than or equal to the number of elements in the queue
        int* newarr = new int[newcap];
        for (int i = 0; i < sz; ++i) {
            newarr[i] = arr[(front + i) % cap];
        }
        delete[] arr;
        arr = newarr;
        front = 0;
        rear = sz;
        cap = newcap;
    }
};

int main() {
    RAQueue queue;
    int n, m;
    cout << "Enter the number of peoples " << endl;
    cin >> n;
    cout << "Enter the positon " << endl;
    cin >> m;
    for (int i = 0; i < n; i++) {
        queue.enqueue(i);
    }
    while (queue.size() > 1) {
        for (int i = 0; i < m - 1; i++) {
            queue.enqueue(queue.dequeue());
        }
        queue.dequeue();
    }
    cout << "the person at position " << queue.dequeue() << " is safe " << endl;
    return 0;
}
