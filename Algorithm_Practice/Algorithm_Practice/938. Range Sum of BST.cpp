class Solution
{
public:
    int result = 0;
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        if (root == nullptr) return 0;

        if (root->val >= low && root->val <= high)
        {
            result += root->val;
        }

        rangeSumBST(root->left, low, high);
        rangeSumBST(root->right, low, high);

        return result;
    }
};