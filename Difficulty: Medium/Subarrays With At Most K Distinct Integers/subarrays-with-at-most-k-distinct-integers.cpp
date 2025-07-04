class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int i=0,j=0;
        map<int,int>m;
        int c=0;
        while(j<arr.size()){
              m[arr[j]]++;
        while (m.size() > k) {
            m[arr[i]]--;
            if (m[arr[i]] == 0) {
                m.erase(arr[i]);
            }
            i++;
        }
           c += (j - i + 1);
        j++;
        }
        return c;
    }
};