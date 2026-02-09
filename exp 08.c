#include<stdio.h>
int main() {
    int a[20],n,i,key;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key: ");
    scanf("%d",&key);
    for(i=0;i<n;i++) {
        if(a[i]==key) {
            printf("Found at %d",i+1);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}
