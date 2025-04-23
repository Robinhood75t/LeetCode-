class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,vector<int>> map;
        for(int i=1;i<=n;i++){
            int sum = 0;
            int num = i;
            while(num > 0){
                sum += num % 10;
                num /= 10;
            }
            map[sum].push_back(i);
        }
        int maxsize = 0;
        for(auto& pair : map){
            int size = pair.second.size();
            maxsize = max(maxsize , size);
        }
        int count = 0;
        for(auto& pair : map){
            if(maxsize == pair.second.size()){
                count++;
            }
        }
        return count;
    }
};