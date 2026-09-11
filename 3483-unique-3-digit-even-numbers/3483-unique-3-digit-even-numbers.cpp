class Solution {
public:
    int totalNumbers(vector<int>&digits) {
        int map[10]={0};
        int ans=0;
        for(int i=0;i<digits.size();i++){
            map[digits[i]]++;
        }
        for(int last=0;last<=8;last+=2){
            if(map[last]==0) continue;
            map[last]--;
            for(int first=1;first<=9;first++){
                if(map[first]==0) continue;
                map[first]--;
                for(int middle=0;middle<=9;middle++){
                    if(map[middle]>0) ans++;
                }
                map[first]++;
            }
            map[last]++;
        }
        return ans;
    }
};