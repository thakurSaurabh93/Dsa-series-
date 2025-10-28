class Solution {
public:
  int sum(vector<int>& nums,int s,int e){
    int k=0;
    for(int i=s;i<=e;i++){
        k+=nums[i];
    }
    return k;
  }
    int pivotIndex(vector<int>& nums) {
       int n=nums.size();
    //    if(n==1){
    //     return 0;
    //    }
       for(int i=0;i<n;i++){
         int left=sum(nums,0,i-1);
         int right=sum(nums,i+1,n-1);

         if(left==right){
            return i;
         }
       }
       return -1;
    }
};