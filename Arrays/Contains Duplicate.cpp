//using Map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int l=nums.size();
       bool f=false;
       map<int, int> mp;
       for(auto i: nums) {
           mp[i]++;
       }
       for(auto i: mp) {
           if(i.second >=2) return true;
       }
       return f;
 
    }
};

// Brute Force
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return flag;
    }
};

// Sorted Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag = false;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return flag;
    }
};

// Set Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};

// Hashmap Approach
  class Solution {
  public:
      bool containsDuplicate(vector<int>& nums) {
          unordered_map<int,int> mp;
          for(auto i : nums) mp[i]++;
          bool flag = false;
          for(auto i : mp){
              if(i.second >= 2) return true;
          }
          return flag;
      }
  };

