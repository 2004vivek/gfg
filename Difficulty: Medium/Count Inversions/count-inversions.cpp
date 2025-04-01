//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int c=0;
  public:
    // Function to count inversions in the array.
    void merge(vector<int>&arr,int i,int mid,int j){
        int n=arr.size();
        int low=i;
        int high=mid+1;
        vector<int>v;
     
        while(low<=mid&&high<=j){
            if(arr[low]<=arr[high]){
                v.push_back(arr[low]);
                low++;
            }
            else{
                c=c+(mid-low+1);
                v.push_back(arr[high]);
                high++;
            }
        }
        while(low<=mid){
             v.push_back(arr[low]);
                low++;
        }
        while(high<=j){
             v.push_back(arr[high]);
                high++;
        }
        for(int k=i;k<=j;k++){
            arr[k]=v[k-i];
        }
    }
    void mergesort(vector<int>&arr,int i,int j){
        if(i>=j) return ;
        int mid=(i+j)/2;
        mergesort(arr,i,mid);
        mergesort(arr,mid+1,j);
        merge(arr,i,mid,j);
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