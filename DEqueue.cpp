#include"iostream"
using namespace std;
#define size 15
class dequeue{
    public:
    int a[10],front,rear;
    dequeue()
    {
        front=-1;
        rear=-1;
    }
    void add_at_end(int item)
    {
        if(rear>=size-1){
            cout<<"overflow"<<endl;
        }
    else{
        if(front==-1)
        {
            front++;
            rear++;
        }
        else{
            rear=rear+1;
        }
        a[rear]=item;
        cout<<"inserted item is:"<<a[rear]<<endl;
    }}
    void add_at_beg(int item)
    {
        if(front==-1)
        {
            front=0;
            a[++rear]=item;
            cout<<"inserted element is:"<<item<<endl;
        }
        else if(front!=0)
        {
            a[--front]=item;
            cout<<"inserted element is:"<<item<<endl;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }
    void display()
    {
        if(front==-1)
        {
            cout<<"dequeue is empty";
        }
        else{
            cout<<"elements in dequeue are:"<<" ";
            for(int i=front;i<=rear;i++)
            {
                cout<<a[i]<<" ";
            }
        }
    }
    void delete_from_front()
    {
        if(front==-1)
        {
            cout<<"dequeue is empty"<<endl;
        }
        else
        {
            cout<<"deleted element is:"<<a[front]<<endl;
            if(front==rear)
            {
                front=rear=-1;
                return;
            }
            else
            front=front+1;
        }
    }
void delete_from_rear()
{
    if(front==-1)
        {
            cout<<"dequeue is empty"<<endl;
        }
        else
        {
            cout<<"deleted element is:"<<a[rear]<<endl;
            if(front==rear)
            {
                front=rear=-1;
                return;
            }
            else
            rear=rear-1;
        }
}};
int main()
{
 int c,item;
  dequeue d1;
 do{
    cout<<"---dequeue operation---"<<endl;
    cout<<"1 insert at beginning"<<endl;
    cout<<"2 insert at end"<<endl;
    cout<<"3 display"<<endl;
    cout<<"4 deletion from front"<<endl;
    cout<<"5 deletion from rear"<<endl;
    cout<<"enter ur choice:-"<<endl;
    cin>>c; 
    switch(c)
    {
    case 1:
        cout<<"enter the element to be inserted ";
        cin>>item;
        d1.add_at_beg(item);
        break;
     case 2:
        cout<<"enter the element to be inserted ";
        cin>>item;
        d1.add_at_end(item);
        break;
    case 3:
          d1.display();
          break;
    case 4:
         d1.delete_from_front();
         break;
    case 5:
          d1.delete_from_rear();
          break;
  default:
          cout<<"invalid choice"<<endl;
          break;
    }
 } while(exit);
 return 0;
}
    
   