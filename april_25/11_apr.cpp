class Solution {
public:
    int check(string& s){
        if(s.length() % 2 != 0){
            return false;
        }
        int mid = s.length()/2;
        int leftsum =0,rightsum = 0;
        for(int i=0;i<mid;i++){
            leftsum += s[i] - '0';
        }
        for(int i =mid;i<s.length();i++){
            rightsum += s[i] - '0';
        }
        return leftsum == rightsum;
    }
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i=low;i<=high;i++){
            string s = to_string(i);
            if(check(s)){
                count++;
            }
        }
        return count;
    }
};