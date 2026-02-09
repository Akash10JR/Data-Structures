#include<stdio.h>

void heap(int a[],int n,int i){
 int l=2*i+1,r=2*i+2,large=i,t;
 if(l<n&&a[l]>a[large]) large=l;
 if(r<n&&a[r]>a[large]) large=r;
 if(large!=i){
  t=a[i];a[i]=a[large];a[large]=t;
  heap(a,n,large);
 }
}

int main(){
 int a[]={3,5,1,2,4},n=5,i,t;
 for(i=n/2-1;i>=0;i--) heap(a,n,i);
 for(i=n-1;i>0;i--){
  t=a[0];a[0]=a[i];a[i]=t;
  heap(a,i,0);
 }
 for(i=0;i<n;i++) printf("%d ",a[i]);
}

