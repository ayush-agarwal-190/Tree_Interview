#include<bits/stdc++.h>
using namespace std;


class Solution
{
int maxPathSum(Node* root)
{
    int maxi=INT_MIN;
    maxPathdown(root,maxi);

    return maxi;
}

int maxPathdown(Node* node,int &maxi)
{
 if(node==NULL)
  return 0;

int left=max(0,maxPathdown(root->left,maxi));
int right=max(0,maxPathdown(root->right,maxi));

maxi=max(maxi,left+right+node->val);

return max(left,right)+node->val;

}

};


int main()
{



    return 0;
}