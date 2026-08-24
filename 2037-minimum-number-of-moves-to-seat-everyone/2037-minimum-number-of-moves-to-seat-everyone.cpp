class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int sum=0;
        for(int i=0;i<seats.size();i++){
            int j=seats[i]-students[i];
            if(j<0) j=-j;
            sum+=j;
        }
        return sum;
    }
};