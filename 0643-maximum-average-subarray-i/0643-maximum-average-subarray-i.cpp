class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
        double sum=0;
        for(int high=0;high<k;high++){
            sum+=nums[high];
        }
        double avg=sum/k;
        double res=avg;
        for(int high=k;high<nums.size();high++){
            sum-=nums[low];
            sum+=nums[high];
            low++;
            avg=sum/k;
            
            res=max(res,avg);
        }
        return res;
    }
};