//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int s=0;
        while(n>0){
            int r=n%10;
            s=s+r;
            n=n/10;
        }
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends