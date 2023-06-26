#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        int data=d;
        left=right=NULL;
    }
};
int height(node* node){
if(node==NULL)
return 0;
return 1+max(height(node->left),height(node->right));
}
bool isBalanced(node* root)
{
    int lh;
    int rh;
    if(root==NULL)
    return 1;
    lh=height(root->left);
    rh=height(root->right);
    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
return 1;
return 0;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->left->left=new node(8);
    if(isBalanced(root))
    cout<<"tree is balanced"<<endl;
    else
    cout<<"not balanced"<<endl;
    return 0;
}

