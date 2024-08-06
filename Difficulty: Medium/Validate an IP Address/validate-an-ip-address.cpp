//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        int c=0;
        int n=str.size();
        for(int i=0;i<str.size();i++){
            if(str[i]=='.'){
                c++;
            }
        }
        if(c<3){
            return 0;
        }
        if(str[0]=='.'&&str[n-1]=='.') return 0;
        else{
        string s;
        int ct=0;
        for(int i=0;i<n;i++){
            // cout<<i<<" ";
            if(str[i]!='.'&&i!=n-1){
                s=s+str[i];
            }
            else {
                if(i==n-1){
                    s=s+str[i];
                }
                if(s!=""){
                     int x=stoi(s);
                     if(s[0]=='0'&&x!=0) return 0;
                    // cout<<x<<" ";
                    //  if(x!=s.size()){
                    //      return 0;
                    //  }
                    if(x>=0&&x<=255){
                    ct++;
                    }
                    s="";
                }
               
               
               
            }
        }
        if(ct==4){
            return 1;
        }
        else{
            return 0;
        }
        }
        
        
      
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends