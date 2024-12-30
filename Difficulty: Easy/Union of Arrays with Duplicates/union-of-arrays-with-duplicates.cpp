//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++


class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        set<int>s;
        if(a>b){
            for(int i=0;i<b.size();i++){
                a.push_back(b[i]);
            }
            for(auto it:a){
                s.insert(it);
            }
        }
        else{
             for(int i=0;i<a.size();i++){
                b.push_back(a[i]);
            }
            for(auto it:b){
                s.insert(it);
            }
        }
        return s.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    while (t--) {
        vector<int> a;
        vector<int> b;

        string input;
        // For a
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // For b
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        cout << ob.findUnion(a, b) << endl;
        cout << '~' << endl;
    }

    return 0;
}
// } Driver Code Ends