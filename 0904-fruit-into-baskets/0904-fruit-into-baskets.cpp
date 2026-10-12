class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        unordered_map<int,int> mp;
        int res=INT_MIN;
        for(int high=0;high<fruits.size();high++){
            mp[fruits[high]]++;
            
            while(mp.size()>2){
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0){
                    mp.erase(fruits[low]);
                }
                low++;
            }
            res=max(res,high-low+1);
        }
        return res == 0 ? -1 : res;
        
    }
};