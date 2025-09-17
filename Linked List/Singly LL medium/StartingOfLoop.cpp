#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        map<ListNode*,int> m;
        int timer=0;
        ListNode *temp=head;
        while(temp!=NULL){
            timer++;
            if(m.find(temp)!=m.end()){
                return temp;
            }
            m[temp]=timer;
            temp=temp->next;
        }
        return NULL;
    }
};

int main() {
    // create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // create a cycle: node 5 points back to node 3
    head->next->next->next->next->next = head->next->next;

    Solution obj;
    ListNode *cycleNode = obj.detectCycle(head);

    if(cycleNode != NULL)
        cout << "Cycle begins at node with value: " << cycleNode->val << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}
