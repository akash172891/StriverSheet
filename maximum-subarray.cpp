//https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=0;
        int ans=cur;
        
        for(int i=0;i<nums.size();i++){
            ans=max(cur,ans);
            if(cur+nums[i]<0){
                
                cur=0;
            }
            else cur+=nums[i];
            
            
        }
        ans=max(cur,ans);
        if(ans==0){
            cur=nums[0];
            for(int i=0;i<nums.size();i++){
                cur=max(cur,nums[i]);
            }
            return cur;
        }
        return ans;
    }
};
