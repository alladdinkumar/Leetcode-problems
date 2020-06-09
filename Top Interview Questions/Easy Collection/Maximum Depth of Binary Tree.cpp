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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<pair<TreeNode* ,int>>q;
        q.push({root,1});
        int max_depth=0;
        while(!q.empty())
        {
           TreeNode* node=q.front().first;
            int depth=q.front().second;
            q.pop();
            max_depth=max_depth<depth?depth:max_depth;
            if(node->left!=NULL)
                q.push({node->left,depth+1});
            if(node->right!=NULL)
                q.push({node->right,depth+1});
        }
        return max_depth;
    }
};
