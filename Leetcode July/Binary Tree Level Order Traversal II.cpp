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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<vector<int>>v;
        if(root==NULL)
            return v;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int d=0;
        vector<int>temp;
        while(!q.empty())
        {
            TreeNode* node=q.front().first;
            int depth=q.front().second;
            q.pop();
            if(d==depth)
                temp.push_back(node->val);
            else {
                v.insert(v.begin(),temp);
                temp.clear();
                temp.push_back(node->val);
                d=depth;
            }
            if(node->left!=NULL)
                q.push({node->left,depth+1});
            if(node->right!=NULL)
                q.push({node->right,depth+1});  
        }
        v.insert(v.begin(),temp);
        return v; 
        
    }
};
