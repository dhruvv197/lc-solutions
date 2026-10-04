class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;
        double newAvg=avg;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]-nums[i-k];
            avg=sum/k;
            newAvg=max(newAvg,avg);
        }
        return newAvg;
    }
};