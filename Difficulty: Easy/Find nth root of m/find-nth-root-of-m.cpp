//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int nthRoot(int N, int M) {
        // Code here.
         for(int i=1;i<=M;i++){
      if(pow(i,N)==M){
        return i;
      }
      else if(pow(i,N)>M){
        break;
      }
    }
    return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends