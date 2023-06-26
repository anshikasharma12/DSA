#include<iostream>
#include<math.h>
using namespace std;
#define size 20
struct poly
{
    int coeff;
    int expo;
};
struct poly p1[size],p2[size],p3[size]={};

int readpoly(struct poly[]);
int addpoly(struct poly[],struct poly[],int,int,struct poly[]);
int subpoly(struct poly[],struct poly[],int,int,struct poly[]);
int eval(struct poly[]);
int displaypoly(struct poly[],int terms);
int main()
{
    int t1,t2,t3,ch;
   cout<<"press 1 for add 2 polynomials"<<endl;
   cout<<"press 2 for sub 2 polynomials"<<endl;
   cout<<"press 3 for evaluation of a polynomial"<<endl;
   cin>>ch;
   switch(ch)
   {
    case 1:
    {
    t1=readpoly(p1);
    cout<<"first polynomial:"<<endl;
    displaypoly(p1,t1);
    t2=readpoly(p2);
    cout<<"second polynomial:"<<endl;
    displaypoly(p2,t2);
    t3=addpoly(p1,p2,t1,t2,p3);
    cout<<"resultant polynomial after addition:"<<endl;
    displaypoly(p3,t3);
    break;
   }
   case 2:
   {
     t1=readpoly(p1);
    cout<<"first polynomial:"<<endl;
    displaypoly(p1,t1);
    t2=readpoly(p2);
    cout<<"second polynomial:"<<endl;
    displaypoly(p2,t2);
    t3=subpoly(p1,p2,t1,t2,p3);
    cout<<"resultant polynomial after subtraction:"<<endl;
    displaypoly(p3,t3);
    break;
    }
    case 3:
    {
        cout<<"enter terms for polynomial for evaluation:"<<endl;
        t1=readpoly(p1);
        displaypoly(p1,t1);
        eval(p1);
        break;
    }
    default:
    {
        break;
    }
   }
    return 0;
   }
   int readpoly(struct poly p[size])
   {
    int t1,i;
    cout<<"enter the total no. of terms in polynomial:"<<endl;
    cin>>t1;
    for(i=0;i<t1;i++)
    {
        cout<<"enter coeff: ";
        cin>>p[i].coeff;
        cout<<"enter exponent: ";
        cin>>p[i].expo;
    }
    return(t1);
   }
   int addpoly(struct poly p1[size],struct poly p2[size],int t1,int t2,struct poly p3[size])
   {
    int i,j,k;
     i=0; 
     j=0;
     k=0;
    while(i < t1 && j < t2 )
    {
        if(p1[i].expo==p2[j].expo)
    {
        p3[k].coeff=p1[i].coeff+p2[j].coeff;
        p3[k].expo=p1[i].expo;
        i++;
        j++;
        k++;
    }
    else if(p1[i].expo>p2[j].expo)
    {
        p3[k].coeff=p1[i].coeff;
        p3[k].expo=p1[i].expo;
        i++;
        k++;
    }
    else{
        p3[k].coeff=p2[j].coeff;
        p3[k].expo=p2[j].expo;
        j++;
        k++;
    }
    }
    while(i < t1)
    {
        p3[k].coeff=p1[i].coeff;
         p3[k].expo=p1[i].expo;
        i++;
        k++;
    }
    while(j < t2)
    {
        p3[k].coeff=p2[j].coeff;
        p3[k].expo=p2[j].expo;
        j++;
        k++;
    }
    return k;
   }
   int subpoly(struct poly p1[size],struct poly p2[size],int t1,int t2,struct poly p3[size])
   {
    int i,j,k;
    i=0;
    j=0;
    k=0;
    while(i<t1 && j<t2 )
    {
        if(p1[i].expo==p2[j].expo)
    {
        p3[k].coeff=p1[i].coeff-p2[j].coeff;
        p3[k].expo=p1[i].expo;
        i++;
        j++;
        k++;
    }
    else if(p1[i].expo>p2[j].expo)
    {
        p3[k].coeff=p1[i].coeff;
        p3[k].expo=p1[i].expo;
        i++;
        k++;
    }
    else{
        p3[k].coeff=p2[j].coeff;
        p3[k].expo=p2[j].expo;
        j++;
        k++;
    }
    }
    while(i < t1)
    {
        p3[k].coeff=p1[i].coeff;
        p3[k].expo=p1[i].expo;
        i++;
        k++;
    }
    while(j < t2)
    {
        p3[k].coeff=p2[j].coeff;
        p3[k].expo=p2[j].expo;
        j++;
        k++;
   }
   }
   int eval(struct poly p[])
   {
    int a,evaluation=0;
    cout<<"enter the value of x:";
    cin>>a;
    for(int i=0;i<10;i++)
    {
        if(p[i].coeff!=0)
        {
            evaluation=(evaluation+(p[i].coeff*(pow(a,p[i].expo))));
        }
    }
    cout<<"after evaluation:"<<evaluation;
   }
int displaypoly(struct poly p[],int term)
{
    int x=0;
    int k;
    for(k=size;k>=0;k--)
    {
        if(p[k].coeff!=0)
        {
            cout<<p[k].coeff<<"(x^"<<p[k].expo<<")";

            if(x<(term-1))
            {
                cout<<"+";
                x++;
            }
            else{
                cout<<endl;
                 }
        }
    }
}

















   