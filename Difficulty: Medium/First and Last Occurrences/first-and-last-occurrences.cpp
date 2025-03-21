//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> find(vector<int>& nums, int target) {
        // code here
         int x=-1,y=-1;
      
        auto it=lower_bound(nums.begin(),nums.end(),target);
         x=it-nums.begin();
         if(*it!=target){
             return {-1,-1};
         }
         auto it1=upper_bound(nums.begin(),nums.end(),target);
         y=it1-nums.begin()-1;
         return {x,y};

    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends