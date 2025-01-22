//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
#include <algorithm>
class Solution {
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        vector<int>v;
        vector<int>v1;
        Node *temp1=num1;
        Node *temp2=num2;
        while(temp1!=NULL){
            v.push_back(temp1->data);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            v1.push_back(temp2->data);
            temp2=temp2->next;
        }
     
        int n=v.size();
        int m=v1.size();
        int i=n-1;
        int j=m-1;
        vector<int>v3;
        int s;
        int c=0;
        while(i>=0&&j>=0){
            s = v[i] + v1[j] + c;
        v3.push_back(s % 10);
        c = s / 10;
      
            i--;
            j--;
        }
        // i++;
        // j++;
        // cout<<"the value of i "<< i <<endl;
        // cout<<"the value of j "<< j <<endl;
        // for(int i=0;i<v3.size();i++){
        //     cout<<v3[i]<<" ";
        // }
    //   reverse(v3.begin(), v3.end());
        while(i>=0){
        // cout<<"this is inside i loop";
        
        s = v[i] + c;
        v3.push_back(s % 10);
        c = s / 10;
        i--;
        }
        while(j>=0){
                    // cout<<"this is inside j loop"<<j<<" ";
          s = v1[j] + c;
        v3.push_back(s % 10);
        c = s / 10;
        j--;
        }
        
        if (c > 0) {
        v3.push_back(c);
    }
        reverse(v3.begin(),v3.end());
        // cout<<endl;
         Node* dummy = new Node(0);
    Node* current = dummy;
    int check=0;
    for (int num : v3) {
        if(num==0&&check==0){
            continue;
        }
        else{
            check=1;
        current->next = new Node(num);
        current = current->next;
        }
       
    }

    return dummy->next;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends