class Solution {
public:
    int maxVowels(string s, int k) {
        int low = 0;
        int res = 0;
        int count = 0;

        for (int high = 0; high < s.size(); high++) {
            if (s[high] == 'a' || s[high] == 'e' || s[high] == 'i' ||
                s[high] == 'o' || s[high] == 'u') {
                count++;
            }
            
            while(high-low+1==k){
                res=max(count,res);
                if (s[low] == 'a' || s[low] == 'e' || s[low] == 'i' ||
                s[low] == 'o' || s[low] == 'u') {
                count--;
            }
            low++;
            

            }
            
            

        }
        return res;
    }
};