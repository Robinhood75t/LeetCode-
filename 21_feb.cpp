class FindElements {
public:
    FindElements(TreeNode* root) {
        dfs(root,0);
    }
    
    bool find(int target) {
        return set.count(target) > 0;
    }
    private:
    unordered_set<int> set;

    void dfs(TreeNode* currnode, int curr){
        if(!currnode){
            return ;
        }
        set.insert(curr);
        dfs(currnode->left,curr*2+1);
        dfs(currnode->right,curr*2+2);
    }
};