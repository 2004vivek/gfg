//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.size();
        int maxi=0;
        for(int i=0;i<n;i++){
              vector<int>v(255,0);
            for(int j=i;j<n;j++){
                if(v[s[j]]==1) break;
                maxi=max(maxi,j-i+1);
                v[s[j]]=1;
            }
        }
        return maxi;
        // int i=0;
        // int j=0;
        // int maxi=0;
        // int c=0;
        // map<char,int>m;
        // while(j<n){
        //     if(m.find(s[j])==m.end()){
        //         j++;
        //         c++;
        //         maxi=max(maxi,j-i);
        //         m[s[i]]++;
        //     }
        //     else{
        //         i++;
        //         j++;
        //         m[s[i]]--;
        //     }
            
        // }
        return 1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends