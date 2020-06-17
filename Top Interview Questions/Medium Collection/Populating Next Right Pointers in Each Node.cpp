/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        if(root->left==NULL && root->right==NULL)
        {
            root->next=NULL;
            return root;
        }
        queue<pair<Node*,int>>q;
        q.push({root,1});
        Node* prev=root;
        int prev_d=1;
        while(!q.empty())
        {
            Node* curr=q.front().first;
            int d=q.front().second;
            q.pop();
            if(d!=prev_d)
                prev->next=NULL;
            else
                prev->next=curr;
            prev=curr;
            prev_d=d;
            if(curr->left != NULL)
                q.push({curr->left,d+1});
            if(curr->right != NULL)
                q.push({curr->right,d+1});
            
        }
        return root;
    }
};
