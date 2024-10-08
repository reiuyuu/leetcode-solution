/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* searchBST(struct TreeNode* root, int val) {
    
    struct TreeNode *p = root;
    
    while (p != NULL && p->val != val) {
        if (p->val > val) {
            p = p->left;
        } else {
            p = p->right;
        }
    }
    
    return p;
}
