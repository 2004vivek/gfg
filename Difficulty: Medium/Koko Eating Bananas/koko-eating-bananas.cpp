//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int maxi=*max_element(arr.begin(),arr.end());
        int i=1,j=maxi;
        int s=0;
        int ans=-1;
        while(i<=j){
            s=0;
            int mid=(i+j)/2;
            for(int k=0;k<arr.size();k++){
                s+=(ceil)((double)arr[k]/mid);
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;

        cout << ob.kokoEat(arr, k);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends