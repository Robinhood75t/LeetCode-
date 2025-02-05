class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2){
            return true;
        }
        int idx1 = -1;
        int idx2 = -1;
        int count = 0;

        for(int i=0;i<s1.size();i++){
            if(s1[i] != s2[i]){
                count++;
                if(count > 2) return false;
                if(idx1 == -1){
                    idx1 = i;
                }else if(idx1 != -1){
                    idx2 = i;
                }
            }
        }

        if(count == 2 && s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1]){
            return true;
        }
        return false;
    }
};