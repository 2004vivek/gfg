//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int i=0,j=arr.size()-1;
        int id=-1;
        int ans=0;
        int mini=INT_MAX;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[i]<=arr[mid]){
              
                if(arr[i]<mini){
                    mini=arr[i];
                    id=i;
                }
                i=mid+1;
            }
            else{
              
                if(arr[mid]<mini){
                    mini=arr[mid];
                    id=mid;
                }
               
                j=mid-1;
            }
            
        }
        if(id==-1){
            return 0;
        }
        else{
            return id;
        }
        
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends