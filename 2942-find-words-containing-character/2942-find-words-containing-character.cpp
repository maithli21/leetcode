class Solution {
public:
    vector<int>findWordsContaining(vector<string>& words,char x){
        string c;
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            c=words[i];
            for(int j=0;j<c.size();j++){
                if(c[j]==x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};