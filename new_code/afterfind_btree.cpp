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
    vector<int> postorderTraversal(TreeNode* root) {
        // write code here
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* cur = root;
        TreeNode* prev = nullptr;
        TreeNode* top = nullptr;
        //vector<bool> flag;


        while(!st.empty() || cur){
            while(cur)
            {
                st.push(cur);
                cur = cur->left;
            }
            
            top = st.top();
            if(top->right==nullptr || top->right==prev)
            {
                prev=top;
                res.push_back(top->val);
                st.pop();
            }
            else
            {
                cur=top->right;
            }

        }
        return res;
    }
};