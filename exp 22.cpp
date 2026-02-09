#include<stdio.h>

int main(){
 int g[5][5]={{0,1,1,0,0},{1,0,0,1,0},{1,0,0,1,1},{0,1,1,0,0},{0,0,1,0,0}};
 int q[5],f=0,r=0,v[5]={0},i,u;

 q[r++]=0; v[0]=1;

 while(f<r){
  u=q[f++];
  printf("%d ",u);
  for(i=0;i<5;i++)
   if(g[u][i]&&!v[i]){
    q[r++]=i; v[i]=1;
   }
 }
}

