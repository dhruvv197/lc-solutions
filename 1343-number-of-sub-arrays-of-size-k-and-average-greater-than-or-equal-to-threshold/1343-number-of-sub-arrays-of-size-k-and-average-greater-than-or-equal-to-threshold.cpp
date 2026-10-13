class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low=0;
        double sum=0;
        int count=0;
        for(int high=0;high<k;high++){
            sum+=arr[high];
        }
        double avg=sum/k;
        if(avg>=threshold){
            count++;
        }
        for(int high=k;high<arr.size();high++){
            sum-=arr[low];
            sum+=arr[high];
            low++;
            avg=sum/k;
            if(avg>=threshold){
                count++;
            }
        }
        return count;
    }
};