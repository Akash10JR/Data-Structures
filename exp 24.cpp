#include<stdio.h>
#define INF 999

int main(){
 int g[4][4]={{0,2,INF,6},{2,0,3,8},{INF,3,0,0},{6,8,0,0}};
 int sel[4]={1,0,0,0},i,j,min,x,y;

 for(int e=0;e<3;e++){
  min=INF;
  for(i=0;i<4;i++)
   for(j=0;j<4;j++)
    if(sel[i]&&!sel[j]&&g[i][j]&&g[i][j]<min){
     min=g[i][j]; x=i; y=j;
    }
  printf("%d-%d\n",x,y);
  sel[y]=1;
 }
}

