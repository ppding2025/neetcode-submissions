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
    int goodNodes(TreeNode* root) {
       
          return dfs(root->val,root);


    }

    int dfs(int maxValue, TreeNode* node){
         
         int res=0;
         if (!node)  return 0;
         
         
          if (node->val>=maxValue){
            res=1;           
  
         }
        
         
      
            maxValue=max(maxValue,node->val);
         res+= dfs(maxValue, node->left);
         res+= dfs(maxValue, node->right);
         
        return res;
        



    }


};
