class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n%k!=0){
            return false;
        }
        if(k==1){
            return true;
        }
        int c;
            set<int>s(begin(arr),end(arr));
        vector<int>nums(begin(s),end(s));
        for(int i=0;i<nums.size();i+=k){
            for(int j=i+1;j<i+k;j++){
                if(nums[j]-nums[j-1]>1||nums[j]-nums[j-1]!=1){
                    return false;
                }
            }
            
        }
        return true;
        
    }
};