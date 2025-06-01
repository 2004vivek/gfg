class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int n=mat1.size();
        int r1=0,c1=0,r2=n-1,c2=n-1;
        int ans=0;
        while(r1<n&&r2>=0){
            if(mat1[r1][c1]+mat2[r2][c2]==x){
                ans++;
                c1++;
                c2--;
            }
            else if(mat1[r1][c1]+mat2[r2][c2]>x){
                c2--;
            }
            else{
                c1++;
            }
            if(c1==n){
                c1=0;
                r1++;
            }
            if(c2==-1){
                c2=n-1;
                r2--;
            }
        }
        return ans;
    }
};