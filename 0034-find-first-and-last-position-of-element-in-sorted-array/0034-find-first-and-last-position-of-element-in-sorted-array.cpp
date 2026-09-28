class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto x = lower_bound(nums.begin(), nums.end(), target);
        auto y = upper_bound(nums.begin(), nums.end(), target);
        if(x==y) return {-1,-1};
        int ans1 = x - nums.begin();
        int ans2 = (y - nums.begin()) - 1;        
        return {ans1,ans2};
        
    }
};