#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* findMiddle(ListNode* head){
    ListNode* slow=head,*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

ListNode* mergeTwoLL(ListNode* left,ListNode* right){
    ListNode* dummy=new ListNode(-1);
    ListNode* temp=dummy;
    while(left!=NULL && right!=NULL){
        if(left->val < right->val){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    if (left != NULL) temp->next = left;
    if (right != NULL) temp->next = right;
    return dummy->next;
}

ListNode* SortLL(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* middle=findMiddle(head);
    ListNode* right=middle->next;
    middle->next=NULL;
    ListNode* left=head;
    left=SortLL(left);
    right=SortLL(right);
    return mergeTwoLL(left,right);
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        return SortLL(head);
    }
};

// Helper functions for testing
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;
    vector<int> arr = {4, 2, 1, 3};
    ListNode* head = createList(arr);

    cout << "Original list: ";
    printList(head);

    head = sol.sortList(head);

    cout << "Sorted list: ";
    printList(head);

    return 0;
}
