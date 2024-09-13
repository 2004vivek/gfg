//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                v.push_back(arr[i]);
            }
            else{
                v1.push_back(arr[i]);
            }
        }
        vector<int>v2;
        int n=v.size();
        int m=v1.size();
        int i;
        for( i=0;i<min(n,m);i++){
            v2.push_back(v[i]);
            v2.push_back(v1[i]);
        }
        if(n>m){
            while(i<n){
                 v2.push_back(v[i]);
                 i++;
            }
            
        }
        else if(n<m){
            while(i<m){
                 v2.push_back(v1[i]);
                 i++;
            }
           
        }
        for(int i=0;i<v2.size();i++){
            arr[i]=v2[i];
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
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends