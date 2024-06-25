class Solution {
public:
    void reverseInorder(TreeNode* root, int &sum) {
        if (root == NULL) {
            return;
        }
        reverseInorder(root->right, sum);
        sum += root->val;
        root->val = sum;
        reverseInorder(root->left, sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum =0;
        reverseInorder(root, sum);
        return root;
    }
};
