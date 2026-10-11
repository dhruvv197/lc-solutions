class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0;
        int res=0;
        int maxCnt=0;
        vector<int> freq(26,0);
        for(int high=0;high<s.size();high++){
            freq[s[high]-'A']++;
            maxCnt=max(maxCnt,freq[s[high]-'A']);
            int len=high-low+1;
            int diff=len-maxCnt;
            while(diff>k){
                freq[s[low]-'A']--;
                low++;
                len=high-low+1;
                diff=len-maxCnt;
            }
            res=max(res,len);
        }
        return res;
    }
};