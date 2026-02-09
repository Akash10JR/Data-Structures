#include<stdio.h>

int main(){
 int a[5]={5,2,4,1,3},i,j,key;

 for(i=1;i<5;i++){
  key=a[i];
  j=i-1;
  while(j>=0 && a[j]>key){
   a[j+1]=a[j]; j--;
  }
  a[j+1]=key;
 }

 for(i=0;i<5;i++) printf("%d ",a[i]);
}

