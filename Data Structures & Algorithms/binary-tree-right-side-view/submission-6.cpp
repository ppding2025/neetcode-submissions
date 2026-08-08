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
    vector<int> rightSideView(TreeNode* root) {
        if (!root){

            return {};
        }
        queue<TreeNode*>nodes;
        vector<int> ans;


        nodes.push(root);

        while (!nodes.empty()){

            int size=nodes.size();

            for (int i=0; i<size; ++i){
               TreeNode* temp=nodes.front();
               nodes.pop();
               if (i==size-1){
                ans.push_back(temp->val);
               }
                if (temp->left){

                   nodes.push(temp->left);

                }
                if (temp->right){

                   nodes.push(temp->right);
                }


                
            }


        }
         return ans;
    }
};
