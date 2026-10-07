class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>m;
        for(auto it:s){
            m[it]++;
        }
        int vmax=0;
        int cmax=0;
        for(auto it:s){
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u') {vmax=max(vmax,m[it]);}
            else {cmax=max(cmax,m[it]);}
        }
        return vmax+cmax;
    }
};