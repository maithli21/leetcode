class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int a=0,b=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>=maxi){
                maxi =nums[i];
                a = i;
            }
             if(nums[i]<=mini){
                mini = nums[i];
                b = i;
            }
        }
    if (a == b) return 1;

        int x = max(a, b) + 1;            // both from front
        int y = nums.size() - min(a, b); // both from back

        int z1 = a + 1 + nums.size() - b; // max front, min back
        int z2 = b + 1 + nums.size() - a; // min front, max back

        return min(x, min(y, min(z1, z2)));

        
    }
};