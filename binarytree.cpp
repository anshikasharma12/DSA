#include<iostream>
using namespace std;
 class node
{
   int data;
public:
node* left;
    node* right;
  node(int data)
   {
    this->data=data;
    this->left=NULL;
    this->right=NULL;
   } 

node* insertBST(node *root,int data){
if(root==NULL){
    return new node(data);
}
if(data<=root->data){
    root->left=insertBST(root->left,data);
}
else{
    root->right=insertBST(root->right,data);
}
return root;
}
void insertBST(int data){
    insertBST(this,data);
}
void inorder()
{
    if(this->left!=NULL)
    this->left->inorder();
    cout<<this->data<<endl;
    if(this->right!=NULL)
    this->right->inorder();
    }
void preorder()
{
    cout<<this->data<<endl;
    if(this->left!=NULL)
    this->left->preorder();
    if(this->right!=NULL)
   this->right->preorder();
}
void postorder()
{
    if(this->left!=NULL)
    this->left->postorder();
    if(this->right!=NULL)
    this->right->postorder();
    cout<<this->data<<endl;
   
}};
int main()
{
    node *root=new node(5);
   root->insertBST(1);
   root->insertBST(3);
   root->insertBST(4);
   root->insertBST(2);
   root->insertBST(7);
   //cout<<"preorder:"<<endl;
    //root->preorder();
    cout<<"inorder:"<<endl;
    root->inorder();
    //cout<<"postorder:"<<endl;
    //root->postorder();
    cout<<endl;
    return 0;
}