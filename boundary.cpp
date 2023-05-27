
bool isLeaf(node* root)
{
    return !root->left && !root->right;

}


void addLeftBoundary(Node* root, vector<int>&res)
{
   node* curr=root->left;

   while(cur)
   {
    if(!isLeaf(curr))
     res.push_back(curr->data);
    if(curr->left)
     cur=cur->left;
    else
     cur=cur->right;
   }
}
void addRightBoundary(node* root, vector<int>&res)
{
    node* curr=root->right;
    vector<int> temp;

    while(curr)
    {
        if(!isLeaf(curr))
         temp.push_back(curr->data);
        if(curr->right)
         curr=curr->right;
        else
         curr=curr->left; 
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        res.push_back(temp[i]);
    }
    


}
void addleaves(node* root, vector<int> & res)
{
    if(isleaf(root))
     {
        res.push_back(root->data);
        return;
     }
     if(root->left) addLeaves(root->left,res);
     if(root->right) addLeaves(root->right,res);

}





vector<int> printboundary(Node* root)
{

    vector<int>res;

    if(!root) return res;
    if(!isleaf(root)) res.push_back(root->data);

    addLeftBoundary(root,res);
    addLeaves(root,res);
    addRightBoundary(root,res);

    return res;
}