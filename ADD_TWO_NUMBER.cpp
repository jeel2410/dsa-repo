class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry=0;
        while(l1 || l2||carry){
            int val1= l1?l1->val:0;
            int val2 = l2?l2->val:0;
            
            temp->next =new ListNode((val1+val2+carry)%10);
            temp=temp->next;
            carry=(val1+val2+carry)/10;
            if(l1){
                l1=l1->next;
            }
            if(l2){
                l2=l2->next;
            }
        }
        return dummy->next;
    }
};
