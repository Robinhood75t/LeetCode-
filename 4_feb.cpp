
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maxsum = 0;
        int currsum = 0;
        for(int i=0;i<n;i++){
            if(i == 0 || nums[i] > nums[i-1]){
                currsum += nums[i];
            }else{
                currsum = nums[i];
            }
            maxsum = max(currsum , maxsum);
        }
        return maxsum;
    }
};