class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        double mini=INT_MAX;
        double maxi=INT_MIN;
        int n=salary.size();
        for(int i=0;i<n;i++){
            sum+=salary[i];
            if(salary[i]>maxi){
                maxi=salary[i];
            }
            if(salary[i]<mini){
                mini=salary[i];
            }
        }
        sum=sum-maxi-mini;
        double avg=sum/(n-2);
        return avg;
    }
};