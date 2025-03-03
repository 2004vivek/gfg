//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        vector<int>v;
        int i=0,j=0;
        int maxi=INT_MIN;
        deque<int>dq;
        while(j<arr.size()){
           while(!dq.empty()&&dq.back()<arr[j]){
               dq.pop_back();
           }
           dq.push_back(arr[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                v.push_back(dq.front());
                if(dq.front()==arr[i]){
                    dq.pop_front();
                }
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
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends