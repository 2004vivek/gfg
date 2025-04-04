//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node *reverseList(Node *head){
      Node *prev=NULL;
      Node *temp=head;
      Node *nex=head;
      while(nex!=NULL){
          nex=nex->next;
          temp->next=prev;
          prev=temp;
          temp=nex;
      }
      return prev;
  }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        // if(head->data<9){
        //     head->data+=1;
        //     return head;
        // }
        Node *head1=reverseList(head);
        int carry=1;
        Node *temp=head1;
        Node *nn=new Node(carry);
        while(temp!=NULL){
            int s=temp->data+carry;
            carry=s/10;
            temp->data=s%10;
            temp=temp->next;
        }
        if(carry>0){
            nn->next=head1;
            head1=nn;
            return head1;
            
        }
        Node *head2=reverseList(head1);
        
        
        
        
        return head2;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends