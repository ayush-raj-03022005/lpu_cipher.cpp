#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertNode(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteValue(Node*& head, int value) {
    if (!head) return;
    
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    Node* current = head;
    while (current->next && current->next->data != value) {
        current = current->next;
    }
    
    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

void displayList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter linked list values: ";
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertNode(head, val);
    }

    cout << "Enter value to delete: ";
    cin >> value;

    deleteValue(head, value);

    cout << "Modified linked list: ";
    displayList(head);

    return 0;
}
