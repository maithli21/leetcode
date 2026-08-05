class Solution {
public:
    void helper(int idx,int sum,vector<vector<int>>&ans,vector<int>&ds,vector<int>& candidates, int target){
        if(sum==target){
            ans.push_back(ds);
            return;
        }       
        for(int i=idx;i<candidates.size();i++){
            if(idx!=i&&candidates[i]==candidates[i-1])continue;
            if(sum+candidates[i]>target) break;
            ds.push_back(candidates[i]);
            helper(i+1,sum+candidates[i],ans,ds,candidates,target);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        helper(0,0,ans,ds,candidates,target);
        return ans;
        
    }
};