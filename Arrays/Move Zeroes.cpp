class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
       int n=nums.size();
       int k=0;
       int l=0;
       int r=n;

       while(l<r) {
           if(nums[l]==0){
               l++;
           }
           else{
               swap(nums[k], nums[l]);
               k++;
               l++;
           }
       }
        
    }
};
