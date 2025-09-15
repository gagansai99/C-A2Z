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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode *temp=head,*prev=NULL;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        temp=head;
        int rm=c-n+1;
        c=1;
        while(c<rm){
            prev=temp;
            temp=temp->next;
            c++;
        }
        if(prev!=NULL)
            prev->next=temp->next;
        else{
            return head->next;
        }
        return head;
    }
};

void printList(ListNode* head) {
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main() {
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    Solution obj;
    printList(head);
    head=obj.removeNthFromEnd(head,2);
    printList(head);
    return 0;
}
