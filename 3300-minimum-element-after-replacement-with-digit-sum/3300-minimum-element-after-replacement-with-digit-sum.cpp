class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                int last=nums[i]%10;
                sum+=last;
                nums[i]=nums[i]/10;
            }
            nums[i]=sum;
            mini=min(mini,nums[i]);
        }
        return mini;
    }
};