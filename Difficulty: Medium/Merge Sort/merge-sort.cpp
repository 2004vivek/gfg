//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
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
        if(low>=high) return ;
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        int n=arr.size();
        mergesort(arr,0,n-1);
        
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
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends