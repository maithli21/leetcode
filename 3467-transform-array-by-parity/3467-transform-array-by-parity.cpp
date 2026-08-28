class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int x=0;
        int y=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) x++;
            else y++;
        }
        for(int i=0;i<x;i++){
            nums[i]=0;
        }
        for(int i=x;i<nums.size();i++){
            nums[i]=1;
        }
        return nums;
    }
};