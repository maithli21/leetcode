class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int i=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int a=0;
            while(n>0){
                int no=n%10;
                n=n/10;
                a+=no;
            }
            if(a==i){
                return i; 
            }

        }
        
        return -1;
    }
};