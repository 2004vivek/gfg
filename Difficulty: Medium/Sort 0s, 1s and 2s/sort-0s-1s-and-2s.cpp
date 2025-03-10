//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int zc=0;
        int oc=0;
        int tc=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zc++;
            }
            else if(arr[i]==1){
                oc++;
            }
            else{
                tc++;
            }
        }
     
        for(int i=0;i<zc;i++){
            arr[i]=0;
        }
    
        for(int i=zc;i<oc+zc;i++){
          
            arr[i]=1;
        }
        for(int i=oc+zc;i<arr.size();i++){

            arr[i]=2;
        }
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends