class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int maxlen=0;
        while(j<n){
            if(j>maxlen){
                return false;
            }
            maxlen=max(maxlen,j+nums[j]);
            j++;
        }

        return true;
    }
};