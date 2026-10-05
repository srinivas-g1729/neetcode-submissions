class Solution {
public:
    bool isAnagram(string s, string t) {
       int m = s.size();
       int n = t.size();
       vector<int>freq(26,0);
       vector<int>window(26,0);
       if(m != n){
        return false;
       } 
       else{
        for(int i = 0;i<n;i++){
            freq[s[i] - 'a']++;
            window[t[i] - 'a']++;
        }
       }
       return freq == window;
    }
};
