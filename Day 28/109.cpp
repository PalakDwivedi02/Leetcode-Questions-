/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* ins(int target, TreeNode* root)
    {
        TreeNode *nw = new(TreeNode);
        nw->val = target;
        if(root==NULL)
            return nw;
        TreeNode* preptr=root,*ptr=root;
        while(ptr!=NULL)
        {
            preptr=ptr;
            if(ptr->val>target) ptr=ptr->left;
            else ptr=ptr->right;
        }
        if(preptr->val>target) preptr->left=nw;
        else preptr->right=nw;
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* tmp = new (ListNode);
        tmp->next=head;
        ListNode *slow=tmp,*fast=tmp, *pre=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=NULL;
        TreeNode *root = new (TreeNode);
        root->val = slow->val;
        root->left=sortedListToBST(tmp->next);
        root->right=sortedListToBST(slow->next);
        return root;
    }
};