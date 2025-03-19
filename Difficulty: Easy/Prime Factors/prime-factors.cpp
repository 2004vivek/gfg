//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	  vector<int>v(N+1,1);
	  v[0]=0;
	  v[1]=0;
	  for(int i=2;i<=sqrt(N);i++){
	      for(int j=i*i;j<=N;j+=i){
	          if(v[i]==1){
	              v[j]=0;
	          }
	      }
	  }
	  vector<int>v1;
	  for(int i=2;i<=v.size();i++){
	      if(v[i]==1){
	          if(N%i==0){
	              v1.push_back(i);
	          }
	      }
	  }
	
	  return v1;
	  
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends