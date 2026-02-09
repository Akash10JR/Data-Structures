#include<stdio.h>
int main() {
    int a[20],n,i,key,l=0,h,m;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter sorted numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key: ");
    scanf("%d",&key);
    h=n-1;
    while(l<=h) {
        m=(l+h)/2;
        if(a[m]==key) {
            printf("Found at %d",m+1);
            return 0;
        }
        if(a[m]<key)
            l=m+1;
        else
            h=m-1;
    }
    printf("Not Found");
    return 0;
}  
