    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if((root->val>p->val) &&(root->val>q->val)){
         return    lowestCommonAncestor(root->left,p,q);// search in the left subtree if the value is greater than the and q vals. 
            
        }
       else if((root->val<p->val)&& (root->val<q->val)){
            return lowestCommonAncestor(root->right,p,q);// search in the right subtree if the root is lesser than the p and q vals.
        }
return root;// else if the root is greater than any of the vals then return the root.      
}
