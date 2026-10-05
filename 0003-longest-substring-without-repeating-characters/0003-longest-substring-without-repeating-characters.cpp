class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int res=0;
        unordered_map<char,int> mp;
        for(int high=0;high<s.size();high++){
            mp[s[high]]++;
            int k=high-low+1;
            if(mp.size()<k){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
                k=high-low+1;
            }
            int len=high-low+1;
            res=max(len,res);
        }
        return res;
    }
};