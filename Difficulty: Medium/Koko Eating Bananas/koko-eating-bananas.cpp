class Solution {
  public:
    int bananas(int mid,vector<int>&arr){
        int time=0;
        for(int i=0;i<arr.size();i++){
            time+=ceil((double)arr[i]/mid);
        }
        return time;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int mini=1;
        int maxi=*max_element(arr.begin(),arr.end());
        int mid;
        int ans=-1;
        while(mini<=maxi){
             mid=(mini+maxi)/2;
            int time=bananas(mid,arr);
            if(time<=k){
                ans=mid;
                 maxi=mid-1;

            }
          
            else{
                  mini=mid+1;
            }
        }
        return ans;
     
    }
};