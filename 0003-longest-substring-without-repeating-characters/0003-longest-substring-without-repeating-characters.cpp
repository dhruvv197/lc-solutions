class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        int low=0;
        unordered_map<char,int> mp;
        for(int high=0;high<s.size();high++){
            mp[s[high]]++;
            int k=high-low+1;
            while(mp.size()<k){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
                k=high-low+1;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};