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
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return false;
        }
        string s;
        ListNode *temp=head;
        while(temp!=NULL){
            s+=(char)temp->val;
            temp=temp->next;
        }
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main() {
    ListNode* head=new ListNode('r');
    head->next=new ListNode('a');
    head->next->next=new ListNode('d');
    head->next->next->next=new ListNode('a');
    head->next->next->next->next=new ListNode('r');

    Solution obj;
    cout<<obj.isPalindrome(head)<<endl;
    return 0;
}
