#include<stdio.h>
#define MAX 5

int q[MAX],f=-1,r=-1;

int main(){
    q[++r]=10; f=0;
    q[++r]=20;
    q[++r]=30;

    printf("Deleted %d\n",q[f++]);

    for(int i=f;i<=r;i++)
        printf("%d ",q[i]);
}

