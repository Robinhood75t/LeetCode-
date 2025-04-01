#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    unordered_map<char,int> map;
    vector<int> ans;
    string s = "ababcbacadefegdehijhklij";
    for(int i=0;i<s.length();i++){
        if(map.find(s[i]) != map.end()){
            map[s[i]] = i;
        }
    }
    // for(auto& pair: map){
    //     cout<<pair.first<<"->"<<pair.second<<endl;
    // }
    int i=0;
    while(i<s.length()){
        int end = map[s[i]];
        for(int j=i;j<end;j++){
            end = max(map[s[j]],end);
        }
        ans.push_back(end-i+1);//how can i able to detect that this is my valid partitiion 
        i = end+1;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}