#include<iostream>  
using namespace std;   
struct node    
{    
int data;    
node *next;    
};    
class linkedlist    
{    
private:    
node *head, *tail;
int length;    
public:    
linkedlist()    
{    
head=NULL;    
tail=NULL; 
length=0;   
}    
void insert(int value)    
{  
 length++;  
node *temp=new node;    
temp->data=value;    
if(head==NULL)    
{    
head=temp;    
tail=temp;    
temp->next=head;    
}    
else    
{    
tail->next=temp;    
tail=temp;    
tail->next=head;    
}    
}    
void insertat(int pos,int value)    
{    
      if (head == NULL)
        {
            cout << "-----list is empty----" << endl;
            return;
        }
          if (pos > length)
        {
            cout << "\n---position not exist---\n"<<endl;
            return;
        }
  length++;
  node *pre,*cur;    
  node *temp=new node;    
  cur=head;    
for(int i=1;i<pos;i++)    
{    
pre=cur;    
cur=cur->next;    
}    
temp->data=value;    
pre->next=temp;    
temp->next=cur;    
}    
void deleteat(int pos)    
{   

 if (head == NULL)
        {
            cout << "-----list is empty----" << endl;
            return;
        }
          if (pos > length)
        {
            cout << "\n---position not exist---\n"<<endl;
            return;
        }
node *pre,*cur;    
cur=head;    
if(pos==1)    
{    
head=cur->next;    
tail->next=head;    
delete cur;    
return;    
}    
for(int i=1;i<pos;i++)    
{    
pre=cur;    
cur=cur->next;    
}    
pre->next=cur->next;    
delete cur;    
length--;
}    
void display()    
{    
node *temp=new node;    
temp=head;    
cout<<" Circular link list is: ";    
while(temp->next!=head)    
{    
cout<<temp->data<<"->";    
temp=temp->next;    
}    
cout<<temp->data;    
cout<<endl;    
}    
};    
int main()    
{    
linkedlist l;    



    int p, v, val, pos;
    int ch, ch2;
    do
    {
        cout << "---circular link list----" << endl;
        cout << " 1 insertion in circular-link list" << endl
             << "2 display circulr-link list" << endl
             <<"3 --delete-- "<<endl
             <<"4 ---exit---"<<endl
             <<"enter you choice please" << endl;
        cin >> ch, ch2;
        switch (ch)
        {
        case 1:
            cout << " enter value for new node -- " << endl;
            cin >> v;
            cout<< "1 insert---  "<<endl<< "2 insert at perticular position" << endl;

            cin >> ch2;
            switch (ch2)
            {
            case 1:
                l.insert(v);
                break;
        
            case 2:
                cout << "enter position" << endl;
                cin >> pos;
                l.insertat(pos, v);
                break;
            }
            break;
        case 2:
            l.display();
            break;
            case 3: cout<<"enter the position                  you want to delete ---"<<endl;
              cin>>pos;
                      l.deleteat(pos);
                      break;
                      case 4: cout<<"-----------------"<<endl;
                      exit(1);
                      break;
        }
    } while (ch!=5||ch2!=3);


return 0;    
}