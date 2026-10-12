class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int res=0;
        unordered_map<char,int> mp;
        for(int high=0;high<s.size();high++){
            mp[s[high]]++;
            while(mp.size()<high-low+1){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
            }
            res=max(res,high-low+1);
        }
        return res ;
    }
};