class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void helper(int i, int n, vector<int> nums){
        //base case
        if(i>=n){
            ans.push_back(temp);
            return;
        }

        //pick
        temp.push_back(nums[i]);
        helper(i+1,n,nums);
    
        //unpick
        temp.pop_back();
        helper(i+1,n,nums);
    }    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        helper(0,n,nums);
        return ans;
        
    }
};