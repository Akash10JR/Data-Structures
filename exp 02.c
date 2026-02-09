#include<stdio.h>
int main() {
    int n,i,x;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&x);

        if(x%2==0)
            printf("%d Even\n",x);
        else
            printf("%d Odd\n",x);
    }
    return 0;
}
