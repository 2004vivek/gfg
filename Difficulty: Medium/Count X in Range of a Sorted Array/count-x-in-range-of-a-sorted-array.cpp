class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        int c;
        vector<int>v;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            int x=queries[i][2];
            int lb=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
            int ub=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
            if(lb<arr.size()&&arr[lb]==x){
                int left=max(l,lb);
                int right=min(r,ub-1);
                // cout<<left<<" "<<right<<" "<<endl;
                if(right-left<0){
                    v.push_back(0);
                }
                else{
                    
                v.push_back(right-left+1);
                }
            }
            else{
                v.push_back(0);
            }
        }
        return v;
    }
};