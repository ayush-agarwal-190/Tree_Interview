#include<bits/stdc++.h>
using namespace std;

vector<int> postTraversal(Node* root)
{

    vector<int> postorder;
    stack<Node*> st1,st2;
    st1.push(root);

    while(!st1.empty())
    {
      root=st1.top();
       st1.pop();
       
       st2.push(root);
       
       if(root->left!=NULL)
         st1.push(root->left);
        if(root->right!=NULL)
         st1.push(root->right);


    }
    while(!st2.empty())
    {
        postorder.push_back(st2.top()->val);
        st2.pop();
    }
    return postorder;
}

int main()
{


return 0;   
}