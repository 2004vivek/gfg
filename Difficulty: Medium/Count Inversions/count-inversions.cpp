//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int c=0;
  public:
    // Function to count inversions in the array.
    void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>v;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            v.push_back(arr[i]);
            i++;
        }
        else {
            c=c+(mid-i+1);
            v.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
         v.push_back(arr[i]);
            i++;
    }
    while(j<=high){
         v.push_back(arr[j]);
         j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=v[i-low];
    }
    }
    void mergesort(vector<int>&arr,int low,int high){
        if(low>=high){
            return ;
        }
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int n=arr.size();
        mergesort(arr,0,n-1);
        return c;
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends