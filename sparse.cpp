#include"iostream"
#include"stdlib.h"
#include<math.h>
using namespace std;

int main()
{
	int row,col,value,i,j;
	cout<<"\nEnter total numbers of rows= ";
	cin>>row;
	cout<<"\nEnter total numbers of columns= ";
	cin>>col;
	cout<<"\nEnter total numbers of non zero values=";
	cin>>value;
    int non_sparse[value+1][3];
    int arr[row][col];
	for(i=1;i<=row;i++)
	{
        for(j=1;j<=col;j++)
        {
            arr[i][j]=0;;
        }}
        int k=1;
        non_sparse[k][1]=row;
        non_sparse[k][2]=col;
        non_sparse[k][3]=value;
        k++;
        for(i=1;i<=value;i++)
        {
            int a,b,c;
		cout<<"\nEnter row index of non zero element number "<<i<<endl;
		cin>>a;
		cout<<"\nEnter col index of non zero element number"<<i<<endl;
		cin>>b;
		cout<<"\nEnter value= ";
        cin>>c;
		non_sparse[k][1]=a;
        non_sparse[k][2]=b;
        non_sparse[k][3]=c;
        arr[a][b]=c;
        k++;
}
cout<<"non sparse matrix is:<<\n";
for(i=1;i<=value+1;i++)
{
    for(j=1;j<=3;j++)
    {
        cout<<non_sparse[i][j]<<" ";
    } cout<<"\n";
}
cout<<"sparse matrix is:<<\n";
for(i=1;i<=row;i++){

    for(j=1;j<=col;j++)
    {
        cout<<arr[i][j]<<"";
    }
    cout<<"\n";
}
return 0;
}
	
