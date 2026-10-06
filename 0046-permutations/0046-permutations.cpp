class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    vector<bool>visited;
    void helper(int i, int n, vector<int> nums){
        //base case
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        for(int j=0 ; j<n ; j++){
            if (!visited[j]) {
                temp.push_back(nums[j]);
                visited[j] = true;
                helper(i + 1, n, nums);
                temp.pop_back();
                visited[j] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        visited.resize(n+1,false);
        helper(0,n,nums);
    return ans;    
    }
};