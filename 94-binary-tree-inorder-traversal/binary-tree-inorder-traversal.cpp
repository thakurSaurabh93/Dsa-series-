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
void traverse(vector<int>& a,TreeNode* root){
    if(root==NULL){
        return ;
    }
    
    traverse(a,root->left);
    a.push_back(root->val);
    traverse(a,root->right);


}
    vector<int> inorderTraversal(TreeNode* root) {

         

        vector<int> a;
        traverse(a,root);
        return a;
        // //vector<int> b;
        // if(root==NULL){
        //     return 0;
        // }
        
        
        // inorderTraversal(root->left);
        // a.push(root->val);
        // inorderTraversal(root->right);

        // return a;

    }
};