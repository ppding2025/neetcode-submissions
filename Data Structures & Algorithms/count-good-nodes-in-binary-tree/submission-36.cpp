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
    int res=0;
   
    int goodNodes(TreeNode* root) {
        
        dfs(root,root->val);
        return res;
    }

    void dfs(TreeNode* node, int maxvalue){
        
        if (!node) return;
        if (node->val>=maxvalue){
                
            res++;
        }
        maxvalue=max(maxvalue,node->val);
        dfs(node->left,maxvalue);
        dfs(node->right,maxvalue);
        
       


    }



};
