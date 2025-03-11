class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        vector<int> lastidx(3,-1);
        int ans = 0;
        for(int i=0;i<n;i++){
            lastidx[s[i] - 'a'] = i;
            ans += 1 + min({lastidx[0],lastidx[1],lastidx[2]});
        }
        return ans;
    }
};