//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
      map<int,int>m;
      vector<int>v;
      for(int i=0;i<arr.size();i++){
          m[arr[i]]++;
      }
        for(auto it:m){
          if(it.second==2){
              v.push_back(it.first);
          }
      }
      for(int i=1;i<=arr.size();i++){
          if(m.find(i)==m.end()){
              v.push_back(i);
          }
      }
    
      return v;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends