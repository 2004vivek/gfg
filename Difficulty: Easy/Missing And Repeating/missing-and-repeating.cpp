//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int xr=0;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            xr=xr^arr[i];
            xr=xr^(i+1);
        }
        // cout<<xr<<endl;
        int setbit;
        int mask=log2(xr)+1;
        for(int i=0;i<mask;i++){
            if((xr&(1<<i))>0){
                setbit=i;
            }
        }
        int zero=0,one=0;
        
        for(int i=0;i<arr.size();i++){
            if((arr[i]&(1<<setbit))>0){
                one=one^arr[i];
            }
            else{
                zero=zero^arr[i];
            }
        }
          for(int i=1;i<=arr.size();i++){
            if((i&(1<<setbit))>0){
                one=one^i;
            }
            else{
                zero=zero^i;
            }
        }
      
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(zero==arr[i])c++;
        }
        if(c>=2){
            return {zero,one};
        }
        else{
            return {one,zero};
        }
        // cout<<setbit<<endl;
        return {1,2};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends