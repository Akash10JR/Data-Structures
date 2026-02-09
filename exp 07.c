#include<stdio.h>
int main() {
    int a[50],n,i,pos,val,choice;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("1.Insert 2.Delete 3.Display\n");
    scanf("%d",&choice);
    if(choice==1) {
        printf("Enter position and value: ");
        scanf("%d%d",&pos,&val);
        for(i=n;i>=pos;i--)
            a[i]=a[i-1];
        a[pos-1]=val;
        n++;
    }
    if(choice==2) {
        printf("Enter position: ");
        scanf("%d",&pos);
        for(i=pos-1;i<n;i++)
            a[i]=a[i+1];
        n--;
    }
    printf("Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
