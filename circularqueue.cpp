#include"iostream"
using namespace std;
class queue{

    int front;
    int rear;
    int max;
    int *a;
    public:
    queue(int size)//constructor
    {
        front=-1;
        rear=-1;
        max=size;
        a=new int[max];//array memory allocation
    }
    void push(int x)
    {
        if(rear>=max-1)
        {
         cout<<"overflow:"<<endl;
        } 
        else if(front==-1 && rear==-1)
        {
            front=rear=0;
        }
        else{
            rear=(rear+1)%max;
        }
        a[rear]=x;}
        
    int pop()
    { int item;
        if(front==-1 && rear==-1)
        {
            cout<<"no elements in queue:"<<endl;
        }
        else if(front==rear)
        {
            front=rear=-1;
        }
        else{
         item=a[front];
        front=(front+1)%max;
        cout<<"delete elements is:"<<item<<endl;
 }}
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
          return true;
        else
            return false;
    }};
    int main()
    {
        class queue q1(5);
        q1.push(1);
        q1.push(2);
        q1.push(3);
        q1.pop();
        q1.pop();
        return 0;
    }

    




