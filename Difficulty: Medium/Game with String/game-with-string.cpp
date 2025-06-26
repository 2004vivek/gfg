class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        priority_queue<int>pq;
        vector<int>v(26);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        for(auto it:v){
            pq.push(it);
        }
        // while(!pq.empty()){
        //     cout<<pq.top()<<" ";
        //     pq.pop();
        // }
        while(k>0){
            int x=pq.top();
            pq.pop();
            x--;
            pq.push(x);
            k--;
        }
        int sm=0;
        while(!pq.empty()){
            sm+=pq.top()*pq.top();
            pq.pop();
        }
        
        return sm;
        
    }
};