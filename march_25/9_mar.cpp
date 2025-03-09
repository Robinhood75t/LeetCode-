class Solution {
public:
// optimized code
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int N = n + (k-1);
        int st = 0,count = 0;
        int end = 1;
        for(int i=0;i<k-1;i++){
            colors.push_back(colors[i]);
        }
        while(end < N){
            if(colors[end] == colors[end-1]){
                st = end;
                end++;
                continue;
            }
            if(end-st+1 == k){
                count++;
                st++;
            }
            end++;
        }
        return count;
        // int n = colors.size();
        // int count = 0;
        // int st = 0, end = 0;
        // while(st < n){
        //     end = st;
        //     bool flag = true;
        //     for(int i=0;i<k-1;i++){
        //         int curr = colors[(end)%n];
        //         int nxt = colors[(end+1)%n];
        //         if(curr == nxt){
        //             flag = false;
        //             break;
        //         }
        //         end++;
        //     }
        //     if(flag){
        //         count++;
        //     }
        //     st++;
        // }
        // return count;
    }
};