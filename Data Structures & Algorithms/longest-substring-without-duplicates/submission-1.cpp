class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n = s.size();
        int maxLen = 0;
        int l = 0;
        for(int r = 0;r<n;r++){
            mp[s[r]]++;
            if(mp.size() == r-l+1){
                maxLen = max(maxLen,r-l+1);
            }
            while(mp.size() < r-l+1){
                mp[s[l]]--;
                if(mp[s[l]] == 0){
                mp.erase(s[l]);
            }
                l++;
            }
        }
        return maxLen;
    }
};
