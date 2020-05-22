class Solution {
public:
    int count = 0, k1;
    int ans;
    void dfs(TreeNode* root){
        if(!root)
            return;
        dfs(root -> left);
        count++;
        if(count == k1){
            ans = root -> val;
            return;
        }
        dfs(root -> right);
    }
    int kthSmallest(TreeNode* root, int k) {
        k1 = k;
        dfs(root);
        return ans;
    }
};
