#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

// Insert AFTER p-th position
Node* insertAfterPos(Node* head, int p, int x) {
    Node* newnode = new Node(x);

    // If list is empty and p==0
    if (head == NULL) {
        if (p == 0) return newnode;
        return head; // invalid position
    }

    Node* temp = head;
    int c = 0;

    // Move to the p-th node
    while (temp != NULL && c < p) {
        temp = temp->next;
        c++;
    }

    // If p is out of bounds
    if (temp == NULL) return head;

    // Insert after temp
    Node* nxt = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = nxt;
    if (nxt != NULL) nxt->prev = newnode;

    return head;
}

// Print list forward
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create initial list: 1 <-> 2 <-> 3
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout << "Original list: ";
    printList(head);

    // Insert 99 after position 1 (0-based indexing → after node with value 2)
    head = insertAfterPos(head, 1, 99);

    cout << "After inserting 99 after position 1: ";
    printList(head);

    // Insert 77 after position 3 (after node with value 3, i.e. at end)
    head = insertAfterPos(head, 3, 77);

    cout << "After inserting 77 after position 3: ";
    printList(head);

    return 0;
}
