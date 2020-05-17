class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        ListNode* last = head;
        while(last -> next && last -> next->next){
            last = last -> next -> next;
        }
        ListNode* temp = NULL;
        if(last -> next){
            temp = last -> next;
            temp -> next = NULL;
        }
        last -> next = NULL;
        ListNode* curr = head;
        ListNode* yo = last;
        while(curr != last){
            yo -> next = curr -> next;
            curr -> next = curr -> next -> next;
            yo = yo->next;
            yo -> next = NULL;
            curr = curr -> next;
        }
        if(temp){
            yo -> next = temp;
            yo = yo -> next;
        }
        return head;
    }
};
