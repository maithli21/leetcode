class Solution {
public:
    int digitFrequencyScore(int n){
        int number=n;
        int ans;
        while(number>0){
            int r=number%10;
            number/=10;
            ans+=r;
        }
        return ans;
    }
};