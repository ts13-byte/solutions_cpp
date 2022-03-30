class Solution {
public:
     TreeNode* helper(vector<int> &inorder,int instart,int inend,vector<int> &postorder,int poststart,int postend,unordered_map<int,int> &mp){
         if(instart>inend || poststart> postend) return NULL;
         
         TreeNode *root=new TreeNode(postorder[postend]);
         int inroot =mp[postorder[postend]];
         int numleft=inroot-instart;
         
         root->left=helper(inorder,instart,inroot-1,postorder,poststart,poststart+numleft-1,mp);
         root->right=helper(inorder,inroot+1,inend, postorder,poststart+numleft,postend-1,mp);
         
return root;         
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        int n=postorder.size();
        int m=inorder.size();
      return  helper(inorder,0,m-1,postorder,0,n-1,mp);
    }
};
