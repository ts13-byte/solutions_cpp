  int widthOfBinaryTree(TreeNode* root) {
       if(root==NULL){
           return 0;
       } 
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});
unsigned long long int l,r,width=0;
        
    while(!q.empty()){
        unsigned long long int size=q.size();
        
        
        for(unsigned long long int  i=0;i<size;i++){
        TreeNode* front=q.front().first;
       unsigned long long int  x=q.front().second;
        q.pop();
            if(i==0){
                l=x;
            }
            if(i==size-1){
                r=x;
            }
        if(front->left){
            q.push({front->left,2*x+1});
        }
        if(front->right){
            q.push({front->right,2*x+2});
        }
    }
        width=max(width,r-l+1);
    }    
return width;          
}
