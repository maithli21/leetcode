class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            int weight=0;
            for(int j=0;j<s.size();j++){
                char ch=s[j];
                int idx;
                idx=ch-'a';
                weight+=weights[idx];
            }
            weight=weight%26;
            char mapped = 'z' - weight;
            ans += mapped;
        }
        return ans;
    }
};