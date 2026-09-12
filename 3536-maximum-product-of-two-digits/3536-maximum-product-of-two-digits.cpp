class Solution {
public:
    int maxProduct(int n) {
        int no=n;
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        while(no>0){
            int digit=no%10;
            no=no/10;
            if(digit>maxi1){
                maxi2=maxi1;
                maxi1=digit;
            }
            else if(digit>maxi2){
                maxi2=digit;
            }
        }
        return maxi1*maxi2;
    }
};