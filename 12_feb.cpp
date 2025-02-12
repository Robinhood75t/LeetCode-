class Solution {
public:
    int maximumSum(vector<int>& nums) {
       int maxsum = 0;
       unordered_map<int,int> map;
       for(int i=0;i<nums.size();i++){
           int number = nums[i];
           int sum = 0;
           while(number > 0){
            int lastdigit = number % 10;
               sum += lastdigit;
               number = number/10;
           }
           if(map.find(sum) != map.end()){
              maxsum = max(maxsum , nums[i] + map[sum]);
              map[sum] = max(map[sum],nums[i]);
           }else{
            map[sum] = nums[i];
           }
       } 
       if(maxsum == 0){
        return -1;
       }
       return maxsum;
    }
};