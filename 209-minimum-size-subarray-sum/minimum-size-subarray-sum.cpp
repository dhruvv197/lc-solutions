class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0, high=0,res=INT_MAX,sum=0;
        while(high<nums.size()){
            sum+=nums[high];
            while(sum>=target){
                int len=high-low+1;
                res=min(res,len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        return res==INT_MAX?0:res;
    }
};