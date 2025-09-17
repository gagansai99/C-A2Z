#include <bits/stdc++.h>
using namespace std;

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
    int lengthOfLoop(Node *head) {
        if(head==NULL||head->next==NULL){
            return 0;
        }
        map<Node*,int> m;
        int timer=0;
        Node *temp=head;
        while(temp!=NULL){
            timer++;
            if(m.find(temp)!=m.end()){
                return timer-m[temp];
            }
            m[temp]=timer;
            temp=temp->next;
        }
        return 0;
    }
};

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next->next;

    Solution obj;
    cout << obj.lengthOfLoop(head) << endl;

    return 0;
}
