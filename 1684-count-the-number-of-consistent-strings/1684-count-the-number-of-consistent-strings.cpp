class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words){
        bool allow[26]={0};
        int count=0;
        for(int i=0;i<allowed.size();i++){
            allow[allowed[i]-'a']=1; 
        }
        for(int j=0;j<words.size();j++){
            string c=words[j];
            bool flag=true;
            for(int k=0;k<c.size();k++){
                if(allow[c[k]-'a']==0){
                    flag=false;
                    break;
                }
            }
            if(flag) count++; 
        }
        return count;
    }
};