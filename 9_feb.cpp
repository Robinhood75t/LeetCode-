class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long gp = 0;
        long long tp = (n*(n-1))/2;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i]-i) != map.end()){
                gp += map[nums[i]-i];
            }
            map[nums[i]-i]++;
        }
        return tp - gp;
    }
};