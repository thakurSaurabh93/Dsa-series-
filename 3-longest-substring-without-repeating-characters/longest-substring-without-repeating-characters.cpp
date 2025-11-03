class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.size();
       int cnt=0;
       for(int i=0;i<n;i++){
        map<char,bool>m;
         int k=0;
        for(int j=i;j<n;j++){
            if(m[s[j]]!=true){
                k++;
                m[s[j]]=true;
                cnt=max(k,cnt);
            }
            else{
                //cnt=0;
                break;
            }
        }
       }

       return cnt;
    }
};