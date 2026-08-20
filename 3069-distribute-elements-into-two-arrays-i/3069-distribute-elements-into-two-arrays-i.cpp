class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a1;
        vector<int>a2;
        int n=nums.size();
        if(n==0) return a1;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        int j=0;
        int k=0;
        for(int i=2;i<n;i++){
            if(a1.back()>a2.back()){
                a1.push_back(nums[i]);
            }
            else{
                a2.push_back(nums[i]);
            }
        }
        for(int i=0;i<a2.size();i++){
            a1.push_back(a2[i]);
        }
        return a1;
    }
};