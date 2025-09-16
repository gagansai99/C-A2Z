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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newnode=new ListNode(-1),*temp1=l1,*temp2=l2;
        ListNode *temp3=newnode;
        int c=0;
        while(temp1!=NULL||temp2!=NULL){
            int sum=c;
            if(temp1!=NULL){
                sum+=temp1->val;
            }
            if(temp2!=NULL){
                sum+=temp2->val;
            }
            ListNode *add=new ListNode(sum%10);
            temp3->next=add;
            temp3=add;
            c=sum/10;
            if(temp1!=NULL)
                temp1=temp1->next;
            if(temp2!=NULL)
                temp2=temp2->next;
        }
        if(c!=0){
            temp3->next=new ListNode(c);
        }
        newnode=newnode->next;
        return newnode;
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
    ListNode* l1=new ListNode(2);
    l1->next=new ListNode(4);
    l1->next->next=new ListNode(3);

    ListNode* l2=new ListNode(5);
    l2->next=new ListNode(6);
    l2->next->next=new ListNode(4);

    Solution obj;
    ListNode* result=obj.addTwoNumbers(l1,l2);
    printList(result);
    return 0;
}
