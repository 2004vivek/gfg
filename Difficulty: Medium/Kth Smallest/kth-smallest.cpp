//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        
        // code here
        // sort(arr.begin(),arr.end());
        // return arr[k-1];
        set<int>s;
        int n=arr.size();
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        auto it=s.begin();
        for(auto it:s){
            if(k==1){
                return it;
            }
            k--;
            it++;
        }
        // auto it=s.begin();
        // for(int i=0;i<k;i++){
            
        // }
        // it--;
        // cout<<*it;
        // return *it;
        // return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
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
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl;
    }
    return 0;
}

// } Driver Code Ends