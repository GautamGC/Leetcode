class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        TreeNode* current = root;
        stack<TreeNode*> nodes;

        while (current != NULL || !nodes.empty()) {
            while (current != NULL) {
                nodes.push(current);
                current = current->right;
            }
            current = nodes.top();
            nodes.pop();
            sum += current->val;
            current->val = sum;
            current = current->left;
        }

        return root;
    }
};
