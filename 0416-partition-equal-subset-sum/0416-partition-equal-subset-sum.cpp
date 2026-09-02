class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        else{
            int target=sum/2;
            vector<vector<bool>>dp(n+1,vector<bool>(target+1,false));
            for(int i=0;i<=n;i++) dp[i][0]=true;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=target;j++){
                    bool nottake=dp[i-1][j];
                    bool take=false;
                    if(nums[i-1]<=j) take=dp[i-1][j-nums[i-1]];
                    dp[i][j]= take | nottake;
                }
            }
            return dp[n][target];
        }
        }   
};