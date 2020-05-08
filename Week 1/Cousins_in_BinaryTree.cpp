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
    void find_relation(TreeNode* root,int parent,int ht,unordered_map<int,pair<int,int>> &map)
    {
         
        if( root == NULL)
            return;
        map[root->val] = {parent,ht};
        find_relation(root->left,root->val,ht+1,map);
        find_relation(root->right,root->val,ht+1,map);
        
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x || root->val == y)
            return false;
       unordered_map<int, pair<int, int>> map;
        
        find_relation(root,-1,0,map);
        
        return map[x].first != map[y].first && map[x].second == map[y].second;
        
    }
};