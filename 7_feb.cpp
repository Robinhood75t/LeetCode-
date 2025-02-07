class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> map;
        vector<int> ans;
        unordered_map<int,int> revmap;
        for(auto& query : queries){
            int x = query[0];
            int y = query[1];
            if(map.find(x) != map.end()){
                int count = map[x];
                revmap[count]--;
                if(revmap[count] == 0) revmap.erase(count);
            }
            revmap[y]++;
            map[x] = y;
            ans.push_back(revmap.size());
        }
        return ans;
    }
};

/*

 0th query -> 1 - 4   ans = 1
 1th query -> 2 - 5   ans = 2
 2th query -> 1 - 3   ans = 2
 3th query -> 3 - 4   ans = 3

1->4     3->1   ans 1 , 2 , 2 ,3
2->5     5->1 
1->3     4->1 
3->4

*/