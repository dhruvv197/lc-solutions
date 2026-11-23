class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
        double res=INT_MIN;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;
        res=max(avg,res);
        for(int high=k;high<nums.size();high++){
            sum+=nums[high];
            if(high-low+1>k){
                sum-=nums[low];
                low++;
            }
            avg=sum/k;
            res=max(avg,res);
        }
        return res;

    }
};