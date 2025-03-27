//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {

        // Write your code here.
        int maxi=*max_element(arr.begin(),arr.end());
        int s=0;
       int i=1,j=maxi;
       int ans=-1;
       while(i<=j){
           s=0;
           int mid=(i+j)/2;
           for(int k=0;k<arr.size();k++){
               s+=(ceil)((double)arr[k]/(double)mid);
           }
           if(s<=k){
               ans=mid;
               j=mid-1;
           }
           else{
               i=mid+1;
           }
       }
       return ans;
        
        
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.smallestDivisor(arr, d);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends