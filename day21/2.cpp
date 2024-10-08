#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

bool hasCycle(Node* head) {
    if (!head) return false;
    Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) return true;
    }
    return false;
}

int main() {
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(-4);

   
    head->next->next->next->next = head->next; // tail connects to the 1st node

    cout << "Cycle detected: " << (hasCycle(head) ? "true" : "false") << endl;

    return 0;
}
