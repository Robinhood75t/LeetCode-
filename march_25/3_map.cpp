class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector<int> first;
        vector<int> second;
        vector<int> third;

        for(int i=0;i<n;i++){
            if(nums[i] < pivot){
                first.push_back(nums[i]);
            }else if(nums[i] > pivot){
                second.push_back(nums[i]);
            }else{
                third.push_back(nums[i]);
            }
        }
        vector<int> ans(first.begin(),first.end());
        ans.insert(ans.end(),third.begin(),third.end());
        ans.insert(ans.end(),second.begin(),second.end());
        // for(int i=0;i<n;i++){
        //     if(nums[i] < pivot){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i] == pivot){
        //         ans.push_back(nums[i]); 
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i] > pivot){
        //         ans.push_back(nums[i]);
        //     }
        // }
        return ans;
    }
};