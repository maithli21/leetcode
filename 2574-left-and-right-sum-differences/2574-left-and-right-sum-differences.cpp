class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftsum(n);
        int lsum=0;
        vector<int>rightsum(n);
        int rsum=0;
        for(int i=0;i<n;i++){
            leftsum[i]=lsum;
            lsum+=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            rightsum[i]=rsum;
            rsum+=nums[i];
        }
        for(int i=0;i<n;i++){
            leftsum[i]-=rightsum[i];
            if(leftsum[i]<0) leftsum[i]=-leftsum[i];
        }
        return leftsum;
    }
};