class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1) return 1;
        int i=0;
        int j=0;
        int maxlen=0;
        int len=0;
        int mpp[256]={-1};
        fill(mpp, mpp + 256, -1);
        while(j<s.size()){
            if(mpp[s[j]]!=-1) {
                if(mpp[s[j]]>=i){
                    i=mpp[s[j]]+1;
                }
            }
            len=j-i+1;
            maxlen=max(len,maxlen);
            mpp[s[j]]=j;
            j++;

        }
        return maxlen;
    }
};