class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return {};
        }
        //queue<TreeNode*> q;
        //q.push(root);
        stack<TreeNode*> s1,s2;
        s1.push(root);
        
        while(!s1.empty()||!s2.empty()){
            if(!s1.empty()){
                vector<int> v;
         while(!s1.empty()){
                 TreeNode* node=s1.top();
                 s1.pop();
                 v.push_back(node->val);
                 if(node->left){
                     //q.push(node1->left);
                     s2.push(node->left);
                 }
                 if(node->right){
                     //q.push(node2->right);
                     s2.push(node->right);
                 }
              }
                ans.push_back(v); 
                }
             
            else{
                vector<int> v;
            while(!s2.empty()){
                 TreeNode* node=s2.top();
                 s2.pop();
                 v.push_back(node->val);
                 if(node->right){
                     //q.push(node2->right);
                     s1.push(node->right);
                 }
                 if(node->left){
                     //q.push(node2->left);
                     s1.push(node->left);
                 }
                
            }
            ans.push_back(v);
            }
            
        }
        return ans;
    }
};
