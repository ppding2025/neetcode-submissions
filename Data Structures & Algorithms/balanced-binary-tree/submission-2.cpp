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
private:

    bool isB=true;


public:
    bool isBalanced(TreeNode* root) {
        
        dfs(root);
        return isB;
    }


    int dfs(TreeNode* root){

         if (root==nullptr) return 0;


         int left=dfs(root->left);
         int right=dfs(root->right);

         if (left-right>1||right-left>1)
            isB=false;
         return 1+max(left,right);

    }



};
