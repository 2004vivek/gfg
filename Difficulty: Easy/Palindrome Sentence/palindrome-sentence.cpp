class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                if(isalpha(s[i])){
                temp+=tolower(s[i]);
                }
                else if(isdigit(s[i])){
                    temp+=s[i];
                }
            }
        }
        string temp1=temp;
        reverse(temp.begin(),temp.end());
   
        if(temp==temp1){
            return 1;
        }
        else{
            return 0;
        }
      
    }
};
