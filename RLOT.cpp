vector<int> reverseLevelOrder(Node *root)
{
    if (root == NULL)
        return {};
        
    vector<int>ans;
    
    
    queue<Node*>q;
    
    q.push(root);
    
    while(q.empty()==0){
        Node* n=q.front();
        ans.push_back(n->data);
        
          if(n->right!=NULL){
            q.push(n->right);
        }
        
        if(n->left!=NULL){
            q.push(n->left);
        }
      
        q.pop();
        
    }
    reverse(ans.begin(),ans.end());
    
    return ans;
}
