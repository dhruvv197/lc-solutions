class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int l=0;
        int window=0,maxWindow=0,satisfied=0;
        for(int r=0;r<customers.size();r++){
            if(grumpy[r]){
                window+=customers[r];
            } else{
                satisfied+=customers[r];
            }
            while(r-l+1>minutes){
                if(grumpy[l]){
                    window-=customers[l];
                }
                l++;
            }
            maxWindow=max(window,maxWindow);
        }
        return satisfied+maxWindow;
        
    }
};