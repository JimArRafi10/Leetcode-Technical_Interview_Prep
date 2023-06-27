// We can do this in many ways. We can use two for loop or in a single for loop 
//using single for loop
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // vector<int> nums2;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            nums.push_back(nums[i]);
        }
        // for(int i=0; i<nums.size(); i++) {
        //     nums2.push_back(nums[i]);
        // }

        return nums;
        
    }
};class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums2;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            nums2.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++) {
            nums2.push_back(nums[i]);
        }

        return nums2;
        
    }
};
//using double for loop
