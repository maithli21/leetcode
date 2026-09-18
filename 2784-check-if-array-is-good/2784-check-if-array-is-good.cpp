class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>n-1||nums[i]<1) return false;
            if(nums[i]==n-1) count++;
        }
        if(count!=2) return false;
        for(int x=1;x<n-1;x++){
            int c=0;
            for(int i=0;i<n;i++){
                if(nums[i]==x) c++;
            }
            if(c!=1) return false;
        }
        return true;
    }
};