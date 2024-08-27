//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        vector<int>v;
        vector<int>v1;
        stack<int>st;
        stack<int>st1;
        st.push(0);
        st1.push(0);
        int j=arr.size()-1;
        for(int i=0;i<arr.size();i++){
            while(st.top()>=arr[i]){
                st.pop();
            }
            v.push_back(st.top());
            st.push(arr[i]);
            while(st1.top()>=arr[j]){
                st1.pop();
            }
            v1.push_back(st1.top());
            st1.push(arr[j--]);
        }
        j=arr.size()-1;
        int maxi=0;
        for(int i=0;i<v.size();i++){
            maxi=max(maxi,abs(v[i]-v1[j--]));
        }
        return maxi;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends