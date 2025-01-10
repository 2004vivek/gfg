//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int i=0;
        int j=0;
        map<int,int>m;
        vector<int>v;
        int c=0;
        while(j<arr.size()){
            m[arr[j]]++;
            // if(m[arr[j]]==1){
            //     c++;
            // }
            
            if(j-i+1<k){
                j++;
                
            }
            else if(j-i+1==k){
                       v.push_back(m.size());
                // c=c-1;
                // cout<<m[arr[i]]<<" ";
                m[arr[i]]--;
                if(m[arr[i]]==0){
                    m.erase(arr[i]);
                }
                
         
                
                // s.clear();
                i++;
                j++;
            }
        }
        
        return v;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends