#include<stdio.h>
#define SIZE 10

int main(){
 int h[SIZE]={0},x,i,pos;

 for(i=0;i<5;i++){
  scanf("%d",&x);
  pos=x%SIZE;
  while(h[pos]!=0) pos++;
  h[pos]=x;
 }

 for(i=0;i<SIZE;i++)
  printf("%d ",h[i]);
}

