class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int base=0,windowSum=0,maxExtra=0,low=0;
        for(int high=0;high<n;high++){
            if(grumpy[high]==0){
                base+=customers[high];
            }
            else{
                windowSum+=customers[high];
            }
            if(high-low+1>minutes){
                if(grumpy[low]==1){
                    windowSum-=customers[low];
                }
                low++;
            }
            maxExtra=max(maxExtra,windowSum);
        }
        return base+maxExtra;
    }
};