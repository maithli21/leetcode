class Solution {
public:
    bool checkDivisibility(int n) {
        if(n==0) return false;
        int sum=0;
        int pro=1;
        int number=n;
        while(n>0){
            int last=n%10;
            sum+=last;
            pro*=last;
            n=n/10;
        }
        int s=sum+pro;
        if(number%s==0) return true;
        return false;
    }
};