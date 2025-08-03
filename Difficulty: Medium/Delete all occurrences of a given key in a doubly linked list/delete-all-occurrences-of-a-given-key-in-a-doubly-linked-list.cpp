// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node *temp=*head_ref;
      
        vector<int>v;
        while(temp){
            if(temp->data!=x){
            v.push_back(temp->data);
         
            }
               temp=temp->next;
          
        }
        if(v.size()==0){
            *head_ref=nullptr;
            return;
        }
        
       
        // for(auto it:v){
        //     cout<<it<<" ";
        // }
      
        temp=*head_ref;
        for(int i=0;i<v.size();i++){
    
            temp->data=v[i];
            temp=temp->next;
          
        }
        if(temp&&temp->prev){
        temp->prev->next=NULL;
        }
       
        
        
        
    }
};