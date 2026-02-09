#include<stdio.h>

int part(int a[],int l,int h){
 int p=a[h],i=l-1,j,t;
 for(j=l;j<h;j++)
  if(a[j]<p){ i++; t=a[i];a[i]=a[j];a[j]=t; }
 t=a[i+1];a[i+1]=a[h];a[h]=t;
 return i+1;
}

void qs(int a[],int l,int h){
 if(l<h){
  int p=part(a,l,h);
  qs(a,l,p-1); qs(a,p+1,h);
 }
}

int main(){
 int a[]={4,3,5,1,2},i;
 qs(a,0,4);
 for(i=0;i<5;i++) printf("%d ",a[i]);
}

