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

    bool isbalanced=true;
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return isbalanced;
    }


      int dfs(TreeNode* node){

          if (!node){
            
            
            return 0;

          }
          
          int left=dfs(node->left);
          int right=dfs(node->right);
          if (left-right>1||right-left>1){
               isbalanced=false;
               
          }
          return 1+max(left,right);

      }


};
