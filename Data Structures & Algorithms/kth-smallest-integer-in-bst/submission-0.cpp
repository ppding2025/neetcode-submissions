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
    int kthSmallest(TreeNode* root, int k) {
         vector<int> lst;
         queue<TreeNode*> q;
         q.push(root);
         
         while (!q.empty()){
            TreeNode* node;
            node=q.front();
            q.pop();
            lst.push_back(node->val);
            if (node->left){
               q.push(node->left);


            }
            if (node->right) {

                q.push(node->right);
            }



         }
         
         sort(lst.begin(),lst.end());
         
         return lst[k-1];

    }
};
