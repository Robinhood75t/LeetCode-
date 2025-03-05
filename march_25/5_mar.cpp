// this should be marked as easy
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 0;
        while( n!= 1){
            ans += 4*(n-1);
            n--;
        }
        if(n == 1){
            ans += 1;
            return ans;
        }
        return ans;
    }
};