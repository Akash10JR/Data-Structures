#include<stdio.h>
#define MAX 5

int s[MAX],top=-1;

void push(int x){
    s[++top]=x;
}

void pop(){
    printf("Popped %d\n",s[top--]);
}

void peek(){
    printf("Top = %d\n",s[top]);
}

int main(){
    push(10); push(20); push(30);
    peek();
    pop();
    peek();
}

