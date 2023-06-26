#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
};
class linklist
{
    public:
    node *head,*tail;
    linklist()
    {
        head=NULL;
        tail=NULL;
    }
    void insert_at_begin();
    void insert_at_end();
    void insert_at_position();
    void delete_at_position();
    void display();
};
void linklist::insert_at_begin()
{
    node *temp=new node;
    cout<<"\nEnter data to insert at begining: ";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        temp->prev=NULL;
        head=temp;
        tail=temp;
        return;
    }
    temp->prev=NULL;
    head->prev=temp;
    temp->next=head;
    head=temp;
}
void linklist::insert_at_end()
{
    node *temp=new node;
    cout<<"\nEnter data to insert at end: ";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        temp->prev=NULL;
        head=temp;
        tail=temp;
        return;
    }
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void linklist::insert_at_position()
{
    int pos,cnt=1;
    cout<<"\nEnter data to insert at position: ";
    cin>>pos;
    node *temp=new node;
    cout<<"\nEnter data to insert at position: ";
    cin>>temp->data;
    if(pos==1)
    {
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
        return;
    }
    node *t=head;
    while(cnt<pos-1)
    {
        t=t->next;
        cnt++;
    }
    temp->prev=t;
    temp->next=t->next;
    t->next=temp;
    temp->next->prev=temp;
}
void linklist::delete_at_position()
{
    int pos;
    cout<<"\nEnter position to Insertion and deletion operations on doubly link list using class link list in c++. delete: ";
    cin>>pos;
    node *t=head;
    if(pos==1)
    {
        head=t->next;
        free(t);
        return;
    }
    int cnt=1;
    while(cnt<pos-1)
    {
        t=t->next;
        cnt++;
    }
    node *temp=t->next;
    node *t2=temp->next;
    t->next=t2;
    t2->prev=t;
    free(temp);
}
void linklist::display()
{
    node *t=head;
    cout<<"\nContents of linklist are: ";
    while(t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main()
{
    linklist l;
    int choice;
    while(1)
    {
        cout<<"\n1.Insert at begining\n2.Insert at end\n3.Insert at position\n4.Delete at position\n5.Display\n6.Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:l.insert_at_begin();break;
            case 2:l.insert_at_end();break;
            case 3 :l.insert_at_position();break;
            case 4:l.delete_at_position();break;
            case 5:l.display();break;
            case 6:exit(0);break;
            default:cout<<"\nWrong choice..";
        }
    }
    return 0;
}