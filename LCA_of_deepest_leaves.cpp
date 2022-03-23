    TreeNode* lca_help(TreeNode *root,int h,int height){
         if(root==NULL){
             return root;
         }
        if(h==height-1){
            return root;
        }
        
        TreeNode *l=lca_help(root->left,h+1,height);
        TreeNode *r=lca_help(root->right,h+1,height);
        
        if(l&&r){
            return root;
        }
        if(!l){
            return r;
        }
        return l;
}
    int find_h(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        return 1+max(find_h(root->left),find_h(root->right));
        
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
     int height=find_h(root);
   return  lca_help(root,0,height);
         
}
