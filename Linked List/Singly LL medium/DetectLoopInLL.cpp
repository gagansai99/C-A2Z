#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode *slow=head,*fast=head->next;
        while(slow!=fast){
            if(fast==NULL||fast->next==NULL){
                return false;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return true;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next;

    Solution obj;
    cout << obj.hasCycle(head) << endl;
    return 0;
}
