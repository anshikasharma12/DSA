#include"iostream"
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtBegining(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAtEnd(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
node* temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    insertAtEnd(head,1);
     insertAtEnd(head,2);
      insertAtEnd(head,3);
      display(head);
      insertAtBegining(head,4);
      insertAtBegining(head,5);
      insertAtEnd(head,6);
      display(head);
      return 0;
}
