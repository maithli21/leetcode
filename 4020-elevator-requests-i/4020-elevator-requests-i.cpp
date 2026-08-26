class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int last=0;
        int time=0;
        for(int i=0;i<requests.size();i++){
            if(requests[i]>n) continue;
            if(last==requests[i]) continue;
            time+=abs(last-requests[i]);
            last=requests[i];
        }
        return time;
    }
};