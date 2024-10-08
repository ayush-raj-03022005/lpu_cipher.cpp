#include <iostream>
using namespace std;

class PriorityQueue {
private:
    int arr[100];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void insert(int value) {
        if (size == 100) {
            cout << "Priority Queue is full" << endl;
            return;
        }
        arr[size] = value;
        size++;
    }

    int getHighestPriority() {
        if (size == 0) {
            cout << "Priority Queue is empty" << endl;
            return -1;
        }

        int highestPriorityIndex = 0;
        for (int i = 1; i < size; i++) {
            if (arr[i] < arr[highestPriorityIndex]) {
                highestPriorityIndex = i;
            }
        }
        return highestPriorityIndex;
    }

    void deleteHighestPriority() {
        if (size == 0) {
            cout << "Priority Queue is empty" << endl;
            return;
        }

        int index = getHighestPriority();
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void display() {
        if (size == 0) {
            cout << "Priority Queue is empty" << endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    pq.insert(30);
    pq.insert(20);
    pq.insert(40);
    pq.insert(10);

    cout << "Priority Queue elements: ";
    pq.display();

    cout << "Element with highest priority: " << pq.getHighestPriority() << endl;

    pq.deleteHighestPriority();
    cout << "Priority Queue after deleting highest priority element: ";
    pq.display();

    return 0;
}
