#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        if (head == NULL) {
            Node *newnode = new Node(x);
            return newnode;
        }
        Node *newnode = new Node(x);
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        return head;
    }
};

// Utility function to print linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Solution obj;
    Node* head = NULL;  // start with empty list
    
    // Insert some nodes
    head = obj.insertAtEnd(head, 10);
    head = obj.insertAtEnd(head, 20);
    head = obj.insertAtEnd(head, 30);
    head = obj.insertAtEnd(head, 40);

    cout << "Linked List: ";
    printList(head);

    return 0;
}
