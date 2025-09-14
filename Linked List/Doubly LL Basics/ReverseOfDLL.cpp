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

Node* reverse(Node* head) {
    if (head == NULL || head->next == NULL) return head;
    Node* curr = head;
    Node* prevNode = NULL;
    while (curr != NULL) {
        Node* nxt = curr->next;
        curr->next = curr->prev;
        curr->prev = nxt;
        prevNode = curr;
        curr = nxt;
    }
    return prevNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    printList(head);
    head = reverse(head);
    printList(head);

    return 0;
}
