//https://leetcode.com/problems/next-permutation/


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)return;
        if(n==2){
            swap(nums[0],nums[1]);
            return;
        }
        bool f=true;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                f=false;
                break;
            }
        }
        if(f){
            sort(nums.begin(),nums.end());
            return;
        }
        
        int ind1=n-2;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }
        int ind2=ind1+1;
        
        for(int i=n-1;i>ind1;i--){
            if(nums[i]>nums[ind1] && nums[ind2]>nums[i])ind2=i;
        }
        swap(nums[ind1],nums[ind2]);
        
        vector<int>pt;
        
        for(int i=ind1+1;i<n;i++)pt.push_back(nums[i]);
        sort(pt.begin(),pt.end());
        int j=ind1+1;
        for(int i=ind1+1;i<n;i++){
            nums[i]=pt[i-j];
        }
        
        
        
        
        
        
    }
};
