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
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        vector<int>v;
        Node *temp=root;
        while(temp!=NULL){
            Node *t1=temp;
            while(t1!=NULL){
                v.push_back(t1->data);
                t1=t1->bottom;
            }
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        Node *t2=new Node(v[0]);
        Node *head1=t2;
        for(int i=1;i<v.size();i++){
            t2->bottom=new Node(v[i]);
            t2=t2->bottom;
        }
        return head1;
    }
};