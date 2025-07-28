// LeetCode #108 - Convert Sorted Array to Balanced BST
// Build a balanced binary search tree by choosing the middle element as root recursively.

#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* build(vector<int>& nums, int start, int end) {
        if (start > end) return nullptr;  // no elements left
        
        int mid = (start + end) / 2;      // find middle element
        
        TreeNode* root = new TreeNode(nums[mid]);  // make middle element root
        
        root->left = build(nums, start, mid - 1);  // build left subtree
        root->right = build(nums, mid + 1, end);   // build right subtree
        
        return root;
    }
};
