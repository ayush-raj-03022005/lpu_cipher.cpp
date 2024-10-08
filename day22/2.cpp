#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Stack stack(n);
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        stack.push(value);
    }

    cout << "Popped values:\n";
    while (!stack.isEmpty()) {
        cout << stack.pop();
        if (!stack.isEmpty()) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
