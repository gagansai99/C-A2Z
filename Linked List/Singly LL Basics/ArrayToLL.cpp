#include <bits/stdc++.h>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        if(arr.empty()) return nullptr;
        
        Node* head = new Node(arr[0]); // create head
        Node* temp = head;
        
        for(int i = 1; i < arr.size(); i++) {
            temp->next = new Node(arr[i]); // create new node
            temp = temp->next;             // move forward
        }
        
        return head;
    }
};

// Function to print linked list
void printList(Node* head) {
    Node* curr = head;
    while(curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    Solution obj;
    Node* head = obj.arrayToList(arr);
    
    cout << "Linked List: ";
    printList(head);
    
    return 0;
}
