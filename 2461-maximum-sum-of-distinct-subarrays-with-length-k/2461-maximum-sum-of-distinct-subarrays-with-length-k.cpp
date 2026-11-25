class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int low=0;
        long long sum = 0;
long long maxi = 0;
        for(int high=0;high<k;high++){
            sum+=nums[high];
            mp[nums[high]]++;
        }
        if(mp.size()==k){
            maxi=sum;
        }
        for(int high=k;high<nums.size();high++){
            sum+=nums[high]-nums[high-k];
            mp[nums[high-k]]--;
            if(mp[nums[high-k]]==0){
                mp.erase(nums[high-k]);
            }
            mp[nums[high]]++;
            if(mp.size()==k){
                maxi=max(maxi,sum);
            }


        }
        return maxi;
    }
};