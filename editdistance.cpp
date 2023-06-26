#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int d[100][100];
int main(){
        int i,j,m,n,temp,cost;
        char s[]="keep";
        char t[]="helps";
        m=strlen(s);
        n=strlen(t);

        for(i=0;i<=m;i++)
        d[i][0]=i;
        for(j=0;j<=n;j++)
        d[0][j]=j;
        
        
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(s[i-1]==s[j-1]){
                   cost=0;
                }
                else{
                    cost=1;
                }
                temp=min((d[i-1][j]+1),(d[i][j-1+1]));
                d[i][j]=min(temp,(d[i-1][j-1]+cost));
            }

        }
        cout<<"Levinstein distance is:"<<d[n][m];
        return 0;
        }    
