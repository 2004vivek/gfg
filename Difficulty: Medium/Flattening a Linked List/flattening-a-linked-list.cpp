/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
  Node *merged(Node *l1,Node *l2){
      Node *dummy=new Node(-1);
      Node *temp=dummy;
      Node *temp1=l1;
      Node *temp2=l2;
      while(temp1!=NULL&&temp2!=NULL){
          if(temp1->data<temp2->data){
              temp->bottom=temp1;
              temp=temp1;
              temp1=temp1->bottom;
          }
          else{
               temp->bottom=temp2;
              temp=temp2;
              temp2=temp2->bottom;
          }
          temp->next=NULL;
      }
      if(temp1)  temp->bottom=temp1;
      else  temp->bottom=temp2;
      return dummy->bottom;
  }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        if(root==NULL|| root->next==NULL){
            return root;
        }
        Node *mergedhead=flatten(root->next);
        return merged(root,mergedhead);
    }
};