#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = INT_MIN;
        for(long long i=0;i<nums.size();i++){
            for(long long j=i+1;j<nums.size();j++){
                for(long long k = j+1;k<nums.size();k++){
                    long long triplet = (long long )(nums[i]-nums[j]) * nums[k];
                    ans = max(triplet, ans);
                }
            }
        }
        if(ans < 0) return 0;
        return ans;
    }
};