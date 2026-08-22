class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int water=capacity;
        int step=0;
        for(int i=0;i<plants.size();i++){
            if(plants[i]>water){ 
                water=capacity;
                step+=(2*i); 
            }
            water-=plants[i];
            step+=1;
        }
        return step;
    }
};