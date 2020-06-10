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
    vector<int> n;
public:
    TreeNode* make(TreeNode* root, int l,int r)
    {
       if(l>r)
           return NULL;
       int mid= (l+r)/2;
        root= new TreeNode(n[mid]);
        root->left=make(root->left,l,mid-1);
        root->right=make(root->right,mid+1,r);
        return root;  
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        n=nums;
        TreeNode* root=make(root,0,nums.size()-1);
        return root;
    }
};
