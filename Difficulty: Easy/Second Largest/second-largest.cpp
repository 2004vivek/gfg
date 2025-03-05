//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int maxi=INT_MIN;
        int secmaxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                secmaxi=maxi;
                maxi=arr[i];
            }
            else if(arr[i]<maxi&&arr[i]>secmaxi){
                secmaxi=arr[i];
            }
        }
        if(secmaxi==INT_MIN){
            return -1;
        }
        else{
            return secmaxi;
        }
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
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends