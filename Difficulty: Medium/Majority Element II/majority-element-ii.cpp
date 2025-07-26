class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        vector<int>v;
        for(auto it:m){
            if(it.second>(arr.size()/3)){
                v.push_back(it.first);
            }
        }
        return v;
    }
};