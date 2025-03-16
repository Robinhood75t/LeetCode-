class Solution {
public:
    bool timeSuff(vector<int>& ranks,int& cars,long long minute){
        long long carsDone = 0;
        for(auto r : ranks){
            long long n2 = minute/r;
            long long n = floor(sqrt(n2));

            carsDone += n;
        }
        return (carsDone >= cars);
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long ans = 0, l=1, r=1e14;
        while(l < r){
            long long  mid = (l+r)/2;

            if(timeSuff(ranks,cars,mid)){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};