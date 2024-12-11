//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>v;
        for(int i=0;i<a.size();i++){
            v.push_back(a[i]);
        }
         for(int i=0;i<b.size();i++){
            v.push_back(b[i]);
        }
       
         sort(v.begin(),v.end());
        //  cout<<"array afer sorting"<<" ";
        //   for(auto it:v){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
         vector<int>v1;
         for(auto it:a){
             v1.push_back(it);
         }
         vector<int>v2;
         for(auto it:b){
             v2.push_back(it);
         }
         a.clear();
         b.clear();
         int n=v1.size();
         for(int i=0;i<n;i++){
             a.push_back(v[i]);
         }
         int m=v2.size();
         for(int i=0;i<m;i++){
             b.push_back(v[n+i]);
         }
         
         
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Inputting the test cases

    while (t--) {
        vector<int> a, b;

        // Reading the first array as a space-separated line
        string arr1;
        getline(cin >> ws, arr1); // Use ws to ignore any leading whitespace
        stringstream ss1(arr1);
        int num;
        while (ss1 >> num) {
            a.push_back(num);
        }

        // Reading the second array as a space-separated line
        string arr2;
        getline(cin, arr2);
        stringstream ss2(arr2);
        while (ss2 >> num) {
            b.push_back(num);
        }

        Solution ob;
        ob.mergeArrays(a, b);

        // Output the merged result
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends