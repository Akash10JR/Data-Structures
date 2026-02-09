#include<stdio.h>
#define INF 999

int main(){
 int g[4][4]={{0,1,4,INF},{1,0,2,5},{4,2,0,1},{INF,5,1,0}};
 int d[4]={0,INF,INF,INF},v[4]={0},i,j,u,min;

 for(i=0;i<4;i++){
  min=INF;
  for(j=0;j<4;j++)
   if(!v[j]&&d[j]<min){min=d[j];u=j;}
  v[u]=1;

  for(j=0;j<4;j++)
   if(d[j]>d[u]+g[u][j])
    d[j]=d[u]+g[u][j];
 }

 for(i=0;i<4;i++) printf("%d ",d[i]);
}

