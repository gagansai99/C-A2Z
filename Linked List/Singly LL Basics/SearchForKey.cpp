#include <bits/stdc++.h>
using namespace std;

/* Node structure */
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        if (head == NULL) {
            return false;
        }
        Node *temp = head;
        while (temp != NULL) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    // Create linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Solution obj;

    int key = 30;
    if (obj.searchKey(head, key))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
