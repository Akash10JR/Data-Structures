#include<stdio.h>
#include<stdlib.h>

struct node{
 int d; struct node*l,*r;
};

struct node* new(int x){
 struct node*n=malloc(sizeof(struct node));
 n->d=x; n->l=n->r=NULL; return n;
}

void inorder(struct node*t){
 if(t){ inorder(t->l); printf("%d ",t->d); inorder(t->r); }
}

int main(){
 struct node*r=new(10);
 r->l=new(5); r->r=new(15);
 inorder(r);
}

