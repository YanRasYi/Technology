/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param root TreeNode类 
     * @return int整型vector
     */
    vector<int> inorderTraversal(TreeNode* root) {
        // write code here
        vector<int> res;
        TreeNode* cur = root;
        stack<TreeNode*> st;

        while(!st.empty() || cur){
            while(cur){
                st.push(cur);
                cur = cur->left;
            }

            cur = st.top();
            st.pop();
            res.push_back(cur->val);
            cur = cur->right;
        }

        return res;
    }
};