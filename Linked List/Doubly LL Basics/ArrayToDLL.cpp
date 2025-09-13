#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;

    Node() {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value) {
        prev = NULL;
        data = value;
        next = NULL;
    }
};

class Solution {
public:
    Node* constructDLL(vector<int>& arr) {
        Node *head = new Node(arr[0]);
        Node *temp = head;
        for (int i = 1; i < arr.size(); i++) {
            Node *newnode = new Node(arr[i]);
            temp->next = newnode;
            newnode->prev = temp;
            temp = temp->next;
        }
        return head;
    }
};

void printDLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    Solution obj;
    Node* head = obj.constructDLL(arr);

    cout << "Doubly Linked List: ";
    printDLL(head);

    return 0;
}
