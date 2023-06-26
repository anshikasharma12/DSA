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
        rear++;
        a[rear]=x;
            if(front==-1)
            {
                front++;
            }
             }
    void pop()
    {
        int item;
        if(front==-1||front>rear)
        {
            cout<<"no elements in queue:"<<endl;
        }
        else{
            item=a[front];
            front++;
            cout<<"delete elements is:"<<item<<endl;
        }
    }
    int peek()
    {
        if(front==-1||front>rear)
        {
            cout<<"no elements in queue:"<<endl;
        }
        else{
            cout<<a[front];
        }
    }
    
    bool empty()
    {
        if(front==-1||front>rear)
        {
            return true;
        }
        else{
            return false;
        }
    }};
    int main()
    {
        class queue q1(5);
        q1.push(1);
        q1.push(2);
        q1.push(3);
        q1.peek();
        q1.pop();
    q1.peek();
    q1.pop();
    q1.peek();
    q1.pop();
        return 0;
    }

    


