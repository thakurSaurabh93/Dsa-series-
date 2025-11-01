class Solution {
public:
// recursion
    int solveRec(vector<int>& coins, int a,vector<int>&dp){
        if(a==0){
            return 0;
        }
        if(a<0){
            return INT_MAX;
        }
        if(dp[a]!=-1){
            return dp[a];
        }
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans=solveRec(coins,a-coins[i],dp);
            if(ans!=INT_MAX){
                mini= min(mini,ans+1);
            }
        }
        dp[a]=mini;
        return mini;
    }
    int coinChange(vector<int>& coins, int a) {
        
        vector<int>dp(a+1,-1);
        int k=solveRec(coins,a,dp);
        if(k==INT_MAX){
            return -1;
        }
        else{
            return k;
        }

       // return k;
    }
};