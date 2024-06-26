class Solution {
public:
    void inorder(TreeNode* root, vector<int>& in) {
        if (root == NULL) {
            return;
        }
        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }

    TreeNode* buildtree(vector<int> traversal, int start, int end) {
        if (start > end) {
            return NULL;
        }
        int mid = (start + end) / 2;
        int data = traversal[mid];
        TreeNode* newnode = new TreeNode(data);
        newnode->left = buildtree(traversal, start, mid - 1);
        newnode->right = buildtree(traversal, mid + 1, end);
        return newnode;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> traversal;
        inorder(root, traversal);
        return buildtree(traversal, 0, traversal.size() - 1);
    }
};
