#include"iostream"
using namespace std;

class Stack
{
private:
	int top;
	int a[10];
public:
	Stack()
	{
		top=-1;
	}
	int empty()
	{
		if(top==-1)
			return 1;
		else
			return 0;
	}
	void push(int v)
	{
		if(top==10)
			cout<<"-------Stack overflow------"<<endl;
		else
		{
			++top;
			a[top]=v;
		}
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"-------Stack underflow--------"<<endl;
			return 0;
		}
		else
		{
			return a[top--];
		}
	}
};

class Queue
{
private:

	Stack ins,del;
public:

	Queue()
	{
	}
	void insert(int d)
	{
		if(ins.empty()&&del.empty())
		{
			ins.push(d);
			return;
		}
		if(ins.empty())
		{
			while(del.empty()==0)
			{	ins.push(del.pop());
			}
			ins.push(d);
		
		}
		else
		{	
			ins.push(d);
		}
	} 	
	void Delete()
	{
		if(ins.empty()&&del.empty())
		{
			cout<<"----------empty---------"<<endl;
			return;
		}
		if(del.empty())
		{
			while(ins.empty()==0)
			{
				del.push(ins.pop());
			}
			cout<<"deleted element is ="<<del.pop()<<endl;
		}
		else
		{
			cout<<"--deleted element is--"<<del.pop()<<endl;
		}
	}
};
int main()
{
	int ch,v;
	Queue q;
    
	do
	{
		cout<<"1-- Insert--"<<endl;
		cout<<"2 --Delete--"<<endl;
     
        cout<<"3 --exit--"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cout<<"--Enter value="<<endl;
					cin>>v;
					q.insert(v);
					break;
				}
			case 2:
				{
					q.Delete();
					break;
				}
                case 3:
                exit(1);
		
		}
	}while(ch!=4);
	
	return 0;
}