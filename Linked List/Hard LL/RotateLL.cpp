#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int c=0;
        ListNode *temp=head;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        if(c==1||c==0){
            return head;
        }
        int ans=k%c;
        int i=1;
        ListNode *curr=head,*fast=head->next;
        while(i<c-ans){
            i++;
            curr=curr->next;
            fast=fast->next;
        }
        curr->next=NULL;
        ListNode *dummy=new ListNode(-1);
        ListNode *temp1=dummy;
        while(fast!=NULL){
            temp1->next=fast;
            temp1=temp1->next;
            fast=fast->next;
        }
        temp1->next=head;
        dummy=dummy->next;
        return dummy;
    }
};

int main() {
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    Solution s;
    int k=2;
    ListNode* ans=s.rotateRight(head,k);
    while(ans!=NULL){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}
