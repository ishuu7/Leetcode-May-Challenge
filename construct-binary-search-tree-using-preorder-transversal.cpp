class Solution {
public:
    TreeNode* insert(TreeNode* root, int value) {
        TreeNode* curr = new TreeNode(value);
        if(root == NULL) {
            root = curr;
            return root;
        }
        if(root -> val > value) {
            root -> left = insert(root -> left, value);
        }
        else {
            root -> right = insert(root -> right, value);
        }
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(int i = 0; i < preorder.size(); i++) {
            root = insert(root, preorder[i]);
        }
        return root;
    }
};