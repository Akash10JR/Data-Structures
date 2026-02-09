#include<stdio.h>
#include<ctype.h>

int s[20],top=-1;

int main(){
    char exp[]="23+5*";
    int i,a,b;

    for(i=0;exp[i];i++){
        if(isdigit(exp[i]))
            s[++top]=exp[i]-'0';
        else{
            b=s[top--];
            a=s[top--];
            if(exp[i]=='+') s[++top]=a+b;
            if(exp[i]=='*') s[++top]=a*b;
        }
    }
    printf("Result=%d",s[top]);
}

