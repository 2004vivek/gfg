//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your code
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int s;
        for(int i=0;i<arr.size();i++){
            s=0;
            for(int j=i;j<arr.size();j++){
                s=arr[i]+arr[j];
                // cout<<s<<" ";
                if(i!=j&&m.find(s)!=m.end()){
                    return true;
                }
            }
            // cout<<endl;
        }
        return false;
        // int s=0;
        // for(int i=0;i<arr.size();i++){
        //     s=0;
        //     for(int j=i;j<arr.size();j++){
        //         s=s+arr[j];
        //         if(s==arr[j+1]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
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
        bool res = obj.findTriplet(arr);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends