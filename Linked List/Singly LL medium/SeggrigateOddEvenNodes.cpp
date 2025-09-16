#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode *odd = head, *even = head->next;
        ListNode *ans = new ListNode(-1);
        ListNode *temp = ans;

        while (odd != NULL) {
            ListNode *newnode = new ListNode(odd->val);
            temp->next = newnode;
            temp = newnode;
            if (odd->next != NULL) {
                odd = odd->next->next;
            } else {
                odd = NULL;
            }
        }

        while (even != NULL) {
            ListNode *newnode = new ListNode(even->val);
            temp->next = newnode;
            temp = newnode;
            if (even->next != NULL) {
                even = even->next->next;
            } else {
                even = NULL;
            }
        }

        return ans->next;
    }
};

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution obj;
    ListNode* result = obj.oddEvenList(head);
    printList(result);

    return 0;
}
