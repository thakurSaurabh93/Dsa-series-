class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>maxi){
                maxi=m[nums[i]];
            }
            
        }
        int sum=0;
       for(auto i=m.begin();i!=m.end();i++){
        if(i->second==maxi){
            sum+=maxi;
        }
       } 

       return sum;          
    }
};