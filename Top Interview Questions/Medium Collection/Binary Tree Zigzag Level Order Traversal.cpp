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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        int prev=1;
        vector<int>temp;
        while(!q.empty())
        {
            int d=q.front().second;
            TreeNode* node=q.front().first;
            q.pop();
            if(prev!=d)
            {
                v.push_back(temp);
                temp.clear();
                prev=d;
            }
            if(d%2==0)
                temp.insert(temp.begin(),node->val);
            else
                temp.push_back(node->val);
            if(node->left!=NULL)
                q.push({node->left,d+1});
            if(node->right!=NULL)
                q.push({node->right,d+1});
           
        }
        if(!temp.empty())
            v.push_back(temp);
        return v;
    }
};
