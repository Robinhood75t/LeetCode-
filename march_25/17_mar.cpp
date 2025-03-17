class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        bool flag = false;
        for(auto& pair : map){
            if(pair.second % 2 == 0){
                flag = true;
            }else{
                return false;
            }
        }
        return flag;
    }
};