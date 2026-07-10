/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if(head->next==NULL){
            return 1;
        }

      ListNode *temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        };
        //list ko aadha baat do
        count=(count)/2;

        ListNode *curr=head,*prev=NULL;
        //count the nodes
        while(count--){
           prev=curr;
           curr=curr->next; 
        };

        prev->next=NULL;

        //reverse the second list after dividing it
         ListNode *front=NULL;
         prev=NULL;
         while(curr){
            front=curr->next;
            curr->next=prev;;
            prev=curr;
            curr=front;
         };

         //now compare both ll
         ListNode *head1=head, *head2=prev;

         while(head1){   //h1 kyu liya pta kro for odd cases
            if(head1->val!=head2->val)
                return 0;

            head1=head1->next;
            head2=head2->next;
         };
         return 1;



        
    }
};