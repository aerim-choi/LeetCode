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
//backtracking
//O(N)/O(N)
class Solution {
public:
    vector<string> ans;
    string s="";
    void recursive(TreeNode* root,string s,vector<string>& ans){
        if(root==NULL)return ;
        if(root->left==NULL && root->right ==NULL){
            s += to_string(root->val);
            ans.push_back(s);
            return;
        }
        s += to_string(root->val);
        s +="->";
        
        recursive(root->left,s,ans);
        recursive(root->right,s,ans);
        return;
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        recursive(root,s,ans);
        return ans;
       
    }
};
