//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>v;
        for(auto it:m){
            if(it.second>nums.size()/3){
                v.push_back(it.first);
            }
        }
        if(v.size()==0){
            v.push_back(-1);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends