class Solution {
public:
    pair<TreeNode* , int> dfs(TreeNode* root){
        if(root == NULL){
            return {};
        }
        auto left = dfs(root->left);
        auto right = dfs(root->right);
        
        if(left.second > right.second){
            return{left.first , left.second + 1};
        }else if(right.second > left.second){
            return{right.first,right.second + 1};
        }else{
            return{root,left.second+1};
        }
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root == NULL) return NULL;
        return dfs(root).first;
    }
};