//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> invIsoTriangle(int N) {
        // code here
        vector<string>v;
        for(int i=1;i<=N;i++){
            for(int j=1;j<i;j++){
                // v.push_back(" ");
                cout<<" ";
            }
            for(int k=1;k<=N-i+1;k++){
                // v.push_back("*");
                cout<<"*";
            }
            for(int k=N-i;k>=1;k--){
                //  v.push_back(" ");
                cout<<"*";
            }
            cout<<endl;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.invIsoTriangle(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends