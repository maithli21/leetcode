class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int prefixmax[n];
        int suffixmin[n];
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            prefixmax[i]=maxi;   
        }
        for(int i=n-1;i>=0;i--){
            mini=min(nums[i],mini);
            suffixmin[i]=mini;   
        }
        int idx=INT_MAX;
        for(int i=0;i<n;i++){
            if(prefixmax[i]-suffixmin[i]<=k) idx=min(idx,i);
        }
        return idx==INT_MAX?-1:idx;
    }
};