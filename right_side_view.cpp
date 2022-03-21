class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
    if(root==NULL){
        return {};
    }
    queue<TreeNode*> q;
    q.push(root);
    vector<int> v;
    while(!q.empty()){
    int size=q.size();
    int i=0;
    while(i<size){
    TreeNode *front=q.front();
    q.pop();
        
    if(i==size-1){
        v.push_back(front->val);
    }
    if(front->left){
        q.push(front->left);
    }    
    if(front->right){
        q.push(front->right);
    } 
        i++;
    }
}
        return v;
    }
};
