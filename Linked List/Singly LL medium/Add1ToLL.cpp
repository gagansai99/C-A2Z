#include <bits/stdc++.h>
using namespace std;

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
    Node* addOne(Node* head) {
        Node *curr=head,*prev=NULL;
        while(curr!=NULL){
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        Node *newnode=new Node(-1);
        Node *temp=newnode;
        Node *temp1=prev;
        int c=1;
        while(temp1!=NULL){
            int sum=c+temp1->data;
            Node *add=new Node(sum%10);
            if(sum>9){
                c=1;
            }
            else{
                c=0;
            }
            temp->next=add;
            temp=add;
            temp1=temp1->next;
        }
        if(c>0){
            temp->next=new Node(c);
        }
        newnode=newnode->next;
        curr=newnode,prev=NULL;
        while(curr!=NULL){
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};

void printList(Node* head) {
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main() {
    Node* head=new Node(9);
    head->next=new Node(9);
    head->next->next=new Node(9);

    Solution obj;
    Node* result=obj.addOne(head);
    printList(result);
    return 0;
}
