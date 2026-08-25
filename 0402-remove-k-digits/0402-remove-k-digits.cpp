class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>s;
        string ans;
        for(int i=0;i<num.size();i++){
            while(!s.empty()&&s.top()>num[i]&&k>0){
                k--;
                s.pop();
            }
            s.push(num[i]);
        }
        while(k>0){
            s.pop();
            k--;
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.size()-1&&ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i);

        return ans.empty()?"0" :ans;

        
    }
};