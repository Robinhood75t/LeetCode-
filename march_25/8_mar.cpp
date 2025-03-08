// this is todays code 
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int st = 0 ,end = 0;
        int rec = INT_MAX;
        int w = 0;
        while(end < n){
            if(blocks[end] == 'W'){
                w++;
            }
            if(end-st+1 == k){
                rec = min(w,rec);
                if(blocks[st] == 'W'){
                    w--;  
                }
                st++;
            }
            end++;
        }
        return rec;
    }
};