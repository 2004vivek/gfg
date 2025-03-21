//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        vector<int>v;
        int floorv=-1;
        int ceilv=-1;
        sort(arr.begin(),arr.end());
        int n=arr.size()-1;
    
        int i=0,j=arr.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]<=x){
                floorv=arr[mid];
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        v.push_back(floorv);
        i=0,j=arr.size()-1;
         while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]>=x){
                ceilv=arr[mid];
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        v.push_back(ceilv);
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends