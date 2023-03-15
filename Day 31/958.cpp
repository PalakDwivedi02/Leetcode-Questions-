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
    bool isCompleteTree(TreeNode* root) {
        if(root==NULL) return 1;
        queue <TreeNode*> tq;
        tq.push(root);
        bool lf = 0;
        while(!tq.empty())
        {
            int n = tq.size();
            while(n--)
            {
                root = tq.front();
                tq.pop();
                if(root->right && root->left==NULL) return 0;
                if(lf && (root->left||root->right)) return 0;
                if(root->left) tq.push(root->left);
                if(root->right) tq.push(root->right);
                if(root->left==0 || root->right==0) lf = 1;
            }
        }
        return 1;
    }
};