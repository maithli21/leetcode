class Solution {
public:
    string clearDigits(string s){
        int n=s.size();
        string news="";
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]<='z'&&s[i]>='a' || s[i]<='Z'&&s[i]>='A'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            news+=st.top();
            st.pop();
        }
        reverse(news.begin(),news.end());
        return news;
    }
};