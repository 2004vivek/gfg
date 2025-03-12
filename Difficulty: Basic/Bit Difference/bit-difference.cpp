//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int x=a^b;
        int mask=log2(x)+1;
        int c=0;
        for(int i=0;i<mask;i++){
            if((x&(1<<i))>0){
                c++;
            }
        }
        return c;
    }
};


//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends