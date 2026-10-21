class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.size();
        unordered_map<char,int> need,window;
        vector<int> res;
        for(char c: p){
            need[c]++;
        }
        int low=0;
        for(int high=0;high<s.size();high++){
            window[s[high]]++;
            while(high-low+1>=k){
                if(need==window){
                    res.push_back(low);
                }
                window[s[low]]--;
                if(window[s[low]]==0){
                    window.erase(s[low]);
                }
                low++;
            }
        }
        return res;
    }
};