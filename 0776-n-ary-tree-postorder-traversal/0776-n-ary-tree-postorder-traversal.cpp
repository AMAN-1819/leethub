/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    private:
    void f(Node*root,vector<int>&ans)
    {if(root==NULL)
    return ;
    for(auto child : root->children)
    {f(child,ans);
    ans.push_back(child->val);}}
public:
    vector<int> postorder(Node* root) {
        vector<int>ans;
        f(root,ans);
      if(root!=NULL)
      ans.push_back(root->val);
        return ans;
        
    }
};