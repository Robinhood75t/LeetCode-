class NumberContainers {
public:
    unordered_map<int,int> map;
    unordered_map<int,set<int>> revmap;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(map.find(index) != map.end()){
            int ele = map[index];
            revmap[ele].erase(index);
            if(revmap[ele].empty()){
                revmap.erase(ele);
            }
        }
        map[index] = number;
        revmap[number].insert(index);
    }
    
    int find(int number) {
        if(revmap.find(number) == revmap.end() || revmap.empty()){
            return -1;
        }
        return *revmap[number].begin();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */