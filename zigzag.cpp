vector<vector<int>> zigzag(Node* root)
{

vector<vector<int>> result;
if(root==NULL) return result;

queue<Node*> nodeQueue;
nodeQueue.push(root);
bool leftRight=true;

while(!nodeQueue.empty())
{
 int size=nodeQueue.size();
 vector<int>row(size);
  for(int i=0;i<size;i++)
 {
    Node* node=nodeQueue.front();
     nodeQueue.pop();

    int index=(leftRight)?i:(size-1-i);
    row[index]=node->data;

    if(node->left)
     nodeQueue.push(node->left);
    if(node->right)
     nodeQueue.push(node->right);
 }
leftRight=!leftRight;
result.push_back(row);
}
    return result;
}