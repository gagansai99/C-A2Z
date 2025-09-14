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

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        if (head == NULL) return NULL;
        Node* temp = head;
        if (x == 1) {
            head = head->next;
            if (head != NULL) head->prev = NULL;
            delete temp;
            return head;
        }
        int c = 1;
        while (temp != NULL && c < x) {
            temp = temp->next;
            c++;
        }
        if (temp == NULL) return head;
        if (temp->prev != NULL) temp->prev->next = temp->next;
        if (temp->next != NULL) temp->next->prev = temp->prev;
        delete temp;
        return head;
    }
};

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

    Solution obj;
    printList(head);

    head = obj.delPos(head, 1);
    printList(head);

    head = obj.delPos(head, 2);
    printList(head);

    head = obj.delPos(head, 5);
    printList(head);

    return 0;
}
