class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int mp1[26]={0};
        int mp2[26]={0};
        for(int i=0;i<s.size();i++){
            mp1[s[i]-'a']=i;
            mp2[t[i]-'a']=i;
        }
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]-'a']-mp2[s[i]-'a']<0) ans+=mp2[s[i]-'a']-mp1[s[i]-'a'];
            else ans+=mp1[s[i]-'a']-mp2[s[i]-'a'];
        }
        return ans;
    }
};