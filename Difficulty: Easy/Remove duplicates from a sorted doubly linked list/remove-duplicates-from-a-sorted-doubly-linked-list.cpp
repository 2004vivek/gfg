/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        struct Node* temp1=head;
        struct Node* temp2=head->next;
        while(temp2!=NULL){
            if(temp1->data==temp2->data){
                if(temp2->next!=NULL){
                temp1->next=temp2->next;
                temp2->next->prev=temp1;
                }
                else{
                    temp1->next=NULL;
                    temp2=NULL;
                }
               temp2 = temp1->next;
            }
            else{
                temp1=temp1->next;
            temp2=temp2->next;
            }
          
        }
        return head;
    }
};