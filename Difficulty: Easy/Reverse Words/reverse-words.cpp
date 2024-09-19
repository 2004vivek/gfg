//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        string ans;
        string temp;
        for(int i=str.size();i>=0;i--){
            if(str[i]!='.'){
                temp=temp+str[i];
            }
            else{
                reverse(temp.begin(),temp.end());
                ans=ans+temp+".";
                temp="";
            }
        }
        if(temp!=""){
            reverse(temp.begin(),temp.end());
            ans=ans+temp;
        }
        // for(int i=0;i<str.size();i++){
        //     if(str[i]!='.'){
        //         temp=temp+str[i];
        //     }
        //     else{
        //         ans=ans+temp;
        //         temp="";
        //     }
        // }
        // if(temp!=""){
        //     ans=ans+temp;
        // }
        // reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends