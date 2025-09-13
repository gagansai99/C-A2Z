#include <bits/stdc++.h>
using namespace std;

/* Node structure */
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    int getCount(Node* head) {
        int count = 0;
        Node *temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    // Manually create linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Solution obj;
    cout << obj.getCount(head) << endl;  // ✅ Only print length

    return 0;
}
