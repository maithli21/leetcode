class Solution {
public:
    int countDigit(int n,int d){
        int c=0;
        while(n>0){
            int last=n%10;
            if(last==d) c++;
            n=n/10;
        }
        return c;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=countDigit(nums[i],digit);
        }
        return count;
    }
};