class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty() || s.size()<t.size()) return "";
        unordered_map<char,int> need,window;
        for(char c : t){
            need[c]++;
        }
        int low=0;
        int formed=0;
        int start=0;
        int minLen=INT_MAX;
        
        for(int high=0;high<s.size();high++){
            window[s[high]]++;
            if(need.count(s[high]) && window[s[high]]==need[s[high]]){
                formed++;
            }
            while(formed==need.size()){
                int len=high-low+1;
                if(len<minLen){
                    minLen=len;
                    start=low;
                }
                if(need.count(s[low]) && window[s[low]]==need[s[low]]){
                    formed--;
                }
                window[s[low]]--;
                if (window[s[low]] == 0) {
                    window.erase(s[low]);
                }
                low++;
                

            }
        }
        return minLen==INT_MAX?"":s.substr(start,minLen);
    }
};