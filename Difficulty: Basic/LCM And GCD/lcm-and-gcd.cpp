//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int maxi=max(a,b);
        int mini=min(a,b);
        vector<int>v;
        int x,y;
        // for(int i=maxi;i<=a*b;i++){
        //     if(i%a==0&&i%b==0){
        //         v.push_back(i);
        //         break;
        //     }
         
        // }
        // int x;
        for(int i=mini;i>=1;i--){
            if(a%i==0&&b%i==0){
                x=i;
                // v.push_back(i);
                break;
            }
        }
              y=a*b/x;
      v.push_back(y);
      v.push_back(x);
        // cout<<x;
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends