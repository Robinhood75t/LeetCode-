// longest strictly increasing and decreasing 
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int inc = 1;
        int maxinc = 1;
        for(int i=0;i<n-1;i++){
            if(nums[i] < nums[i+1]){
                inc++;
            }else{
                inc = 1;
            }
            maxinc = max(maxinc,inc);
        }

        
        int dec = 1;
        int maxdec = 1;
        for(int i=n-1;i>0;i--){
            if(nums[i-1] > nums[i]){
                dec++;
            }
            else{
                dec = 1;
            }
            maxdec = max(maxdec,dec);
        }

        return max(maxinc,maxdec);
    }
};