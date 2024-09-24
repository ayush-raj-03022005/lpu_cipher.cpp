#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() : head(nullptr) {}

    void insertAtPosition(int pos, int x) {
        Node* newNode = new Node(x);
        if (pos == 0) {
            newNode->next = head;
            if (head) head->prev = newNode;
            head = newNode;
            return;
       
