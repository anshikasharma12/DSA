#include<iostream>
using namespace std;
int n,a[50],i,j,position,value,before,after,c1,c2;
void insert(int pos)
{
cout<<"\nenter the new value=";
cin>>value;
if(pos>=n && pos<=0)
{
    cout<<"invalid:"<<endl;
    }
    else
    {
for(j=n;j>=pos;j--)
a[j+1]=a[j];
a[pos]=value;
n++;
}
cout<<"\n\t resultant array=\n";
for(i=0;i<=n;i++)
cout<<a[i]<<"\t";
}
void Delete(int pos)
{
if(pos>=n && pos<=0)
{
    cout<<"pos doesnt exist:"<<endl;
    }
    else
    {
for(j=pos;j<=n;j++)
a[j]=a[j+1];
}
cout<<"\n\tNew Array=\n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
}
int main()
{
    cout<<"Enter total number= ";
cin>>n;
cout<<"\nEnter values=\n";
for(i=0;i<n;i++)
cin>>a[i];
do
{
  cout<<"\n\t=> Do you want to:\n";
  cout<<"\n\t 1. Insert \n";
  cout<<"\n\t 2. Delete \n";
  cout<<"\n\t enter your choice:";
cin>>c1;
switch(c1)
{
case 1:
{
do
{
cout<<"\n\t=>Insert by: \n";
cout<<"\n\t 1. Position \n";
cout<<"\n\t 2. Before any value \n";
cout<<"\n\t 3. After any value \n";
cout<<"\n\t enter your choice:";

cin>>c2;
switch(c2)
{
case 1:
{
cout<<"\nEnter position=";
cin>>position;
insert(position);
break;
}
case 2:
{
cout<<"\nEnter value before you want to insert new value=";
cin>>before;
for(i=0;i<n;i++)
{
if(a[i]==before)
{
position=i;
insert(position);
break;
}
}
break;
}
case 3:
{
cout<<"\nEnter value after you want to insert new value= ";
cin>>after;
for(i=0;i<n;i++)
{
if(a[i]==after)
{
position=i+1;
insert(position);
break;
}
}
break;
}
default:
{
break;
}
}
}while(c2==1||c2==2||c2==3);
break;
}
case 2:
{
do
{
cout<<"\n\tDelete by: \n";
cout<<"\n\t 1. Position \n";
cout<<"\n\t 2. Before any value \n";
cout<<"\n\t 3. After any value \n";
cout<<"\n enter your choice:\n";

cin>>c2;
switch(c2)
{
case 1:
{
cout<<"\nEnter position= ";
cin>>position;
Delete(position);
break;
}
case 2:
{
cout<<"\nEnter value before you want to delete new value=";
cin>>before;
for(i=0;i<=n;i++)
{
if(a[i]==before)
{
position=i-1;
Delete(position);
break;
}
}
break;
}
case 3:
{
cout<<"\nEnter value after you want to delete new value= ";
cin>>after;
for(i=0;i<n;i++)
{
if(a[i]==after)
{
position=i+1;
Delete(position);
break;
}
}
break;
}
default:
{
break;
}
}
}while(c2==1||c2==2||c2==3);
break;
}
default:
{
break;
}
}
}while(c1=1||c1==2);

    return 0;
}










