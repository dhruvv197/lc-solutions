class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low=0;
        int count=0;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        double avg=sum/k;
        if(avg>=threshold){
            count++;
        }
        for(int i=k;i<arr.size();i++){
            sum+=arr[i];
            sum-=arr[low];
            low++;
            avg=sum/k;
            if(avg>=threshold){
                count++;
            }
        }
        return count;
    }
};