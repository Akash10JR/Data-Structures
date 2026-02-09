#include<stdio.h>

int p[10];

int find(int i){
 while(p[i]) i=p[i];
 return i;
}

int main(){
 int a[3][3]={{0,2,3},{2,0,1},{3,1,0}};
 int i,j,min,x,y,e=0;

 while(e<2){
  min=999;
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
    if(a[i][j]&&a[i][j]<min){
     min=a[i][j]; x=i; y=j;
    }

  if(find(x)!=find(y)){
   printf("%d-%d\n",x,y);
   p[y]=x;
   e++;
  }
  a[x][y]=a[y][x]=999;
 }
}

