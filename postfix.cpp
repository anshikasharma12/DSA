#include<iostream>
#include<math.h>
using namespace std;
class stk
{
    int top;
    int max;
    int  *a; //array of stack
    public:
    stk(int size)//class constructor
    {
        top=-1;
        max=size;
        a=new int[max];
    }
    void push(int x)
    {
        if(top>=max-1)
        {
            cout<<"stack is full:"<<endl;
        }
    else{
        top++;
        a[top]=x;
    }
    }
int  pop()
    {
        int item;
        if(top==-1)
        {
        cout<<"stack is empty"<<endl;
        }
        else
        {
            item=a[top];
            top--;
            cout<<item<<endl;
            return item;
        }
    }
    void display()
    {
        int i;
         if(top==-1)
        {
        cout<<"stack is empty:"<<endl;
        }
        else
        {
            for(i=0;i<=top;i++)
            cout<<a[i]<<endl;
        }
    }
    bool isEmpty()
    {
        if(top==-1)  {
            return 1;
        }
        else{
            return 0;
      }
    
    }
    bool isfull()
    {
        if(top==max-1)
        {
            return 1;
        }
        else{
            return 0;}
    }};
    int postfix_Evaluation(string s)
{
    stk st(10);
    int op1,op2,i,top;
    
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {st.push(s[i]-'0');

        } 
    else{
        op2=st.pop();
        op1=st.pop();
        switch(s[i])
    {
       case '+':
        st.push(op1+op2);
        break;
        case '-':
        st.push(op1-op2);
        break;
         case '*':
        st.push(op1*op2);
        break;
        case '/':
        st.push(op1/op2);
        break;
    }
}
    }
return ' ';
}
int main()
{
    cout<<postfix_Evaluation("46+2/5*7+")<<endl;
    return 0;
}



        