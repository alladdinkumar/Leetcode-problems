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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty())
            return NULL;
        TreeNode* root=NULL;
        TreeNode* ptr=NULL;
        unordered_map<int,int>m;
        for(int i=0;i<inorder.size();i++)
        {
            m[inorder[i]]=i;
        }
        root=new TreeNode(preorder[0]);
        for(int i=1;i<preorder.size();i++)
        {
            ptr=root;
            while(ptr!=NULL)
            {
                
                if ( m[ preorder[i] ] < m[ptr->val])
                {
                    if(ptr->left==NULL)
                    {
                        ptr->left=new TreeNode(preorder[i]);
                        break;
                    }
                    ptr=ptr->left;    
                } 
                else
                {
                    if(ptr->right==NULL)
                    {
                        ptr->right=new TreeNode(preorder[i]);
                        break;
                    }
                    ptr=ptr->right;    
                }     
            }
            
        }
        return root;
        
    }
};
