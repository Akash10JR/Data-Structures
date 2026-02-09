#include<stdio.h>

void merge(int a[],int l,int m,int r){
 int i=l,j=m+1,k=0,t[10];
 while(i<=m&&j<=r)
  t[k++]=(a[i]<a[j])?a[i++]:a[j++];
 while(i<=m) t[k++]=a[i++];
 while(j<=r) t[k++]=a[j++];
 for(i=l,k=0;i<=r;i++) a[i]=t[k++];
}

void ms(int a[],int l,int r){
 if(l<r){
  int m=(l+r)/2;
  ms(a,l,m); ms(a,m+1,r);
  merge(a,l,m,r);
 }
}

int main(){
 int a[]={5,4,3,2,1},i;
 ms(a,0,4);
 for(i=0;i<5;i++) printf("%d ",a[i]);
}

