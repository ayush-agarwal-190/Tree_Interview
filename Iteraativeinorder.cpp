#include<bits/stdc++.h>
using namespace std;

struct Node
{

}

vector<int>inorderTraversal(node *root)
{
vector<int>inoder;
stack<node*> st;

node* temp=root;

while(1)
{
if(temp!=NULL)
{
    st.push(temp);
    temp=temp->left;
}
else
{
   if(st.empty())
     break;
    temp=st.top();
      st.pop();
    inoder(temp->data);
    temp=temp->right;
}

}

return inoder;



}


int main()
{



    return 0;
}