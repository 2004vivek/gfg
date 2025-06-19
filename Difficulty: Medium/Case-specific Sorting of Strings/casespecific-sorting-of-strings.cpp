class Solution {
  public:
    string caseSort(string& s) {
        // code here
      string up="";
      string lo="";
      for(int i=0;i<s.size();i++){
          if(isupper(s[i])){
              up+=s[i];
          }
          else{
              lo+=s[i];
          }
      }
      sort(up.begin(),up.end());
      sort(lo.begin(),lo.end());
      string ans="";
      int k=0,l=0;
      for(int i=0;i<s.size();i++){
          if(isupper(s[i])){
              ans+=up[k++];
          }
          else{
              ans+=lo[l++];
          }
      }
      return ans;
    }
};