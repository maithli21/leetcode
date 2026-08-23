class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxi=candies[0];
        vector<bool>ans(n,false);
        for(int i=1;i<n;i++){
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxi) ans[i]=true;
        }
        return ans;
    }
};