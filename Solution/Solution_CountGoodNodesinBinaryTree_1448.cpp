#include <iostream>
#include <vector>
using namespace std;

//O(N)/O(N)
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 class Solution {
 private:
     vector<int> tree;
 public:
     void inOrder(TreeNode* root) {
         if (!root)
             return;
         inOrder(root->left);
         tree.push_back(root->val);
         inOrder(root->right);
     }

     bool isValidBST(TreeNode* root) {
         if (!root)
             return true;
         inOrder(root);
         for (int i = 0; i < tree.size(); i++) {
             cout << tree[i] << " ";
         }
         cout << endl;
         for (int i = 1; i < tree.size(); i++)
             if (tree[i] <= tree[i - 1])
                 return false;
         return true;
     }
 };
int main() {
    TreeNode* tree1 = new TreeNode(5, new TreeNode(1, nullptr, nullptr),
        new TreeNode(4, new TreeNode(3, nullptr, nullptr), new TreeNode(6, nullptr, nullptr)));

    Solution s;
    cout<<s.isValidBST(tree1)<<endl;
   
    return 0;
}
