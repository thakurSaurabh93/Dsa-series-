class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
        int i=0;
        int j=0;
         int zeros=0;
        while(j<nums.size()){
            if(nums[j]==0){
                zeros++;
            }
            if(zeros>k){
                if(nums[i]==0){
                    zeros--;
                }
                i++;
            }
            if(zeros<=k){
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
    return maxlen;
    }
};