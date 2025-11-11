class Solution {
public:
    int jump(vector<int>& nums) {
      int i=0;int j=0;
      int jump=0;
      int n=nums.size();
      while(j<n-1){
        int fd=0;
        for(int k=i;k<=j;k++){
            fd=max(fd,k+nums[k]);
        }
        i=j+1;
        j=fd;
        jump++;
      }
       return jump;
    }
};