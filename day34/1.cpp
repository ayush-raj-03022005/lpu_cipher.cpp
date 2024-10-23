#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

Node* oddEvenList(Node* head) {
    if (!head) return head;
    Node *odd = head, *even = head->next, *evenHead = even;
    while (even && even->next) {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

void printList(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (!head) {
            head = new Node(x);
            tail = head;
        } else {
            tail->next = new Node(x);
            tail = tail->next;
        }
    }
    head = oddEvenList(head);
    printList(head);
    return 0;
}
