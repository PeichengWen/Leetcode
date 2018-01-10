/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct compare{
    bool operator()(ListNode* l,ListNode* r){
        return l->val>r->val;
    }
};
class Solution {
public:
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode dummy(0);
        ListNode* head=&dummy;
        priority_queue<ListNode*,vector<ListNode*>,compare> p;
        for(auto a:lists){
            if(a){
                p.push(a);
            }
        }
        
        while(!p.empty()){
            head->next=p.top();
            head=head->next;
            p.pop();
            if(head->next!=NULL){
                
                p.push(head->next);
            }
            
            
        }
        return dummy.next;
        
    }
};
