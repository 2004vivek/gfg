//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
     bool ispossible(vector<int>&nums,int minc,int k){
        int c=nums[0];
        int cowct=1;
        for(int i=1;i<nums.size();i++){
            if((nums[i]-c)>=minc){
                cowct++;
                c=nums[i];
            }
             if(cowct>=k) return true;
        }
        return false;
       
    }
    int aggressiveCows(vector<int> &nums, int k) {

        // Write your code here
          sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=1,j=nums[n-1]-nums[0];
        while(i<=j){
            int mid=(i+j)/2;
            if(ispossible(nums,mid,k)){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            
        }
        return j;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends