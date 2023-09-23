class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0, r=0, n=nums.size(), ans=INT_MAX;
        long long sum=0;
        
        for(;r<n; r++) {
            sum+=nums[r];
            for(; sum>=target; l++) {
                ans = min(ans, r-l+1);
                sum-=nums[l];
            }
            
        }
        if(ans==INT_MAX) {return 0;}
        return ans;
        
        
    }
};
