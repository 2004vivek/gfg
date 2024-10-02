//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        // Your code here
        deque<int>dq;
        for(int i=0;i<arr.size();i++){
            dq.push_back(arr[i]);
        }
        int k=1;
        while(k<=dq.size()){
            int x=dq.back();
            // cout<<x<<" ";
            dq.pop_back();
            dq.push_front(x);
            int y=dq.size()-k;
            dq.erase(dq.begin()+y);
            k++;
        }
        return dq[0];
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends