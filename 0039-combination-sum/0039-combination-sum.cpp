class Solution {
public:
    void helper(int idx,int sum,vector<vector<int>>&ans,vector<int>&ds,vector<int>& candidates, int target){
        if(sum>target||idx>=candidates.size()){
            return;
        }
        if(sum==target){
            ans.push_back(ds);
            return;
        }
        ds.push_back(candidates[idx]);
        helper(idx,sum+candidates[idx],ans,ds,candidates,target);
        ds.pop_back();
        helper(idx+1,sum,ans,ds,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0,0,ans,ds,candidates,target);
        return ans;
    }
};