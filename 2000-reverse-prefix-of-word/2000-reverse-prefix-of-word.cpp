class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        stack<char>s;
        for(int i=0;i<n;i++){
            s.push(word[i]);
            if(i==n-1 && word[i]!=ch) return word;
            if(word[i]==ch) break;
        }
        int i=0;
        while(!s.empty()){
            word[i]=s.top();
            s.pop();
            i++;
        }
        return word;
    }
};