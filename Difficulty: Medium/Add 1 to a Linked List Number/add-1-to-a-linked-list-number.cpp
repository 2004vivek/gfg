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
  Node *reverse(Node *head){
      Node *temp=head;
      vector<int>v;
      while(temp!=NULL){
          v.push_back(temp->data);
          temp=temp->next;
      }
      temp=head;
      for(int i=v.size()-1;i>=0;i--){
          temp->data=v[i];
          temp=temp->next;
      }
      return head;
  }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
       head=reverse(head);
       Node *temp1=head;
       int carry=1;
       while(temp1!=NULL){
           if(temp1->data<9){
               carry=0;
               temp1->data=temp1->data+1;
               break;
           }
           else{
              temp1->data=0; 
           }
           temp1=temp1->next;
       }
       head=reverse(head);
       if(carry){
           Node *newNode = new Node(1);
        newNode->next = head;
        head = newNode;
       }
       return head;
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
    }
    return 0;
}

// } Driver Code Ends