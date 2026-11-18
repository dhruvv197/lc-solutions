class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
        double res=INT_MIN;
        double sum=0;
        for(int high=0;high<nums.size();high++){
            sum+=nums[high];
            while(high-low+1==k){
                double avg=sum/k;
                res=max(res,avg);
                sum-=nums[low];
                low++;
            }
        }
        return res;

    }
};