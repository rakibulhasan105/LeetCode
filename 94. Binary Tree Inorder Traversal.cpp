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
class Solution
{
public:
    void traversal(vector<int> &vec, TreeNode *root)
    {
        if (root == NULL)
            return;
        else
        {
            traversal(vec, root->left);
            vec.push_back(root->val);
            traversal(vec, root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode *root)
    {

        vector<int> vec;
        traversal(vec, root);

        return vec;
    }
};