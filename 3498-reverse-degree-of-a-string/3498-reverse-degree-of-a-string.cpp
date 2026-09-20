class Solution {
public:
    int reverseDegree(string s) {
        int rev=0;
        for(int i=0;i<s.size();i++){
            int idx='z'-s[i]+1;
            rev+=(idx*(i+1));
        }
        return rev;
    }
};