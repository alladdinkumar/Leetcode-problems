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
    bool checksymmetric(TreeNode* leftn,TreeNode* rightn)
    {
        if(leftn==NULL && rightn==NULL)
            return true;
        else if(leftn==NULL || rightn==NULL)
            return false;
        else if(leftn->val==rightn->val)
        {
              if(checksymmetric(leftn->left ,rightn->right) && checksymmetric(leftn->right ,rightn->left)) 
                  return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return checksymmetric(root->left,root->right);
        
    }
};
