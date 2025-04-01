//  topic -> Dynamic programming 
// Solving problems with brainpower
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    long long mp(int i,vector<vector<int>>& questions,vector<long long>& memo){
        if(i >= questions.size()){
            return 0;
        }
        if(memo[i] != -1){
            return memo[i];
        }
        long long taken = questions[i][0] + mp(i + questions[i][1]+1,questions,memo);
        long long skip = mp(i+1,questions,memo);

        return memo[i] = max(taken, skip);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> memo(questions.size(),-1);
        return mp(0,questions,memo);
    }
};