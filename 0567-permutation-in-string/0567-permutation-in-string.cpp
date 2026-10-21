class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int> need,window;
        for(char c: s1){
            need[c]++;
        }
        int low=0;
        for(int high=0;high<s2.size();high++){
            window[s2[high]]++;
            while(high-low+1>=k){
                if(window == need){
                    return true;
                }
                window[s2[low]]--;
                 if(window[s2[low]]==0){
                window.erase(s2[low]);
            }
                low++;
            }

        }
        return false;

    }
};