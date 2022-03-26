 Node* connect(Node* root) {
     if(root==NULL) return NULL;
     queue<Node*> q;
    q.push(root);
    while(!q.empty()){
       
       int size=q.size();
       for(int i=0;i<size;i++){
           Node* temp=q.front();
           q.pop();
           if(i<size-1) temp->next=q.front();
           if(temp->left) q.push(temp->left);
           if(temp->right) q.push(temp->right);
       }
     }
        
     return root;
    }
