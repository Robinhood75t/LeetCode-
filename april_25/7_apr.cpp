class Solution {
public:
    bool check(vector<int>& nums){
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            if(set.find(nums[i])!=set.end()){
                return false;
            }
            set.insert(nums[i]);
        }
        return true;
    }
    int minimumOperations(vector<int>& nums) {
        if(check(nums)) return 0;
        if((nums.size() < 3) || (nums.size() == 3) && (check(nums)== false)){
            return 1;
        }
        int count = 0;
        int i = 0;
        while(i < nums.size()){
            if(check(nums)) return count;
            if(nums.size() < 3){
                nums.erase(nums.begin(),nums.end());
                count++;
                break;
            }
            nums.erase(nums.begin(),nums.begin() + 3);
            count++;
        }
        return count;
    }
};