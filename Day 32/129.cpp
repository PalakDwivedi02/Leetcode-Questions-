/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    private:
    int totalSum = 0;
    void doSumNumbers(TreeNode* root, int sum) {
        if (root == NULL)
            return;
        sum = sum * 10 + root->val;
        if (!root->left && !root->right)
        {
            totalSum += sum;
            return;
        }
        if (root->left)
            doSumNumbers(root->left, sum);
        if (root->right)
            doSumNumbers(root->right, sum);
    }
    public:
    int sumNumbers(TreeNode* root) {
        doSumNumbers(root, 0);
        return totalSum;
    }
};