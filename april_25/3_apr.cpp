// Maximum Value of an Ordered Triplet II
#include<vector>
#include<climits>
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max_so_far = 0;
        long long min_diff = 0;
        long long ans = 0;
        for(int i =0;i<nums.size();i++){
            ans = max(min_diff * nums[i] , ans);
            min_diff = max(max_so_far - (long long)nums[i],min_diff);
            max_so_far = max(max_so_far,(long long)nums[i]);
        }
        if( ans < 0 ) return 0;
        return ans;
    }
};