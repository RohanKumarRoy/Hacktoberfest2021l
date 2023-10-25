void solve(Node* root, vector<int>&ans, int level){
    if(!root) return;
    
    // entered new level
    if(level == ans.size()) ans.push_back(root->data);
    
    solve(root->left, ans, level+1);
    solve(root->right, ans, level+1);
}

vector<int> leftView(Node *root){
   vector<int>ans;
   solve(root, ans, 0);
   return ans;
}
