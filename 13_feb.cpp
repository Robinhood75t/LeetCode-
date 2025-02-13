class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        priority_queue<long,vector<long>,greater<long>> pq(nums.begin(),nums.end());
        while(pq.size() > 1 && pq.top() < k){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();

            long long ele = x * 2 + y;
            pq.push(ele);
            count++;
        }
        if(pq.top() >= k){
           return count;
        }
        return -1;
    }
};