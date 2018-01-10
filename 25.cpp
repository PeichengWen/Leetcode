/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k<=1) return head;
        
        ListNode a(-1);
        ListNode *dummy=&a;
        dummy->next = head;
        ListNode *pre,*cur,*nex,*temp;
        pre=dummy;
        temp=dummy;
        int nums=0;
        while(temp=temp->next){
            nums++;
        }
        while(nums>=k){
            cur=pre->next;
            nex=cur->next;
            
            for(int i=0;i<k;i++){
                
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            pre=cur;
            nums-=k;
        }
        return a.next;
    }
};
