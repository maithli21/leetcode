class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>mpp(101,0);
        vector<int>res;
        for(auto it:nums){
            mpp[it]++;
            if(mpp[it]==2) res.push_back(it);
        }
        return res;        
    }
};