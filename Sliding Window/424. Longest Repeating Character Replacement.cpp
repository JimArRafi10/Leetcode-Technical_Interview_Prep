class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0, n=s.size(), ans=-1, maxi=0;

        unordered_map<char, int> m;
        for(;r<n; r++) {
            //new element enter and might make the window invalid
            m[s[r]]++;
            maxi=max(maxi, m[s[r]]);
            //try to make the window valid again
            for(; (r-l+1)-maxi > k; l++) {
                m[s[l]]--;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
        
    }
};
