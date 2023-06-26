#include"iostream"
#include<string.h>
using namespace std;

class stk
{
    int top;
    int max;
    char  *a; //array of stack
    public:
    stk(int size)//class constructor
    {
        top=-1;
        max=size;
        a=new char[max];
    }
    void push(char x)
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
    char pop()
    {
        char item;
        if(top==-1)
        {
        cout<<"stack is empty:"<<endl;
          return ' ';
        }
        else
        {
            item=a[top];
            top--;
            cout<<"delete element is:"<<item<<endl;
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
            for(i=top;i>=0;i--)
            cout<<a[i]<<endl;
    }}
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
            return 0;
        }

    }
    };

bool isValid(string s){
    int n=s.length();
    stk st(5);
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]== '{' or s[i]== '(' or s[i]== '[' )
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.isEmpty() and st.pop()=='(')
            {
                continue;
            }
            else{
                ans=false;
                break;
            }
        }else if(s[i]==']')
        {
            if(!st.isEmpty() and st.pop()=='[')
            {
                continue;
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.isEmpty() and st.pop()=='{')
            {
                continue;
            }
            else{
                ans=false;
                break;
            }
        }}
        if(!st.isEmpty())
        return false;
        return ans;
};
int main(){
    string s="{a-(b+d})";
if(isValid(s))
{
    cout<<"valid string"<<endl;

}
else{
    cout<<"invalid string"<<endl;
    return 0;
}}


