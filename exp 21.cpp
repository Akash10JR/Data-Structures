#include<stdio.h>
#include<stdlib.h>
struct node{
 int d,h;
 struct node*l,*r;
};
int max(int a,int b){ return a>b?a:b; }
int height(struct node*n){ return n?n->h:0; }
struct node* new(int x){
 struct node*n=malloc(sizeof(struct node));
 n->d=x; n->l=n->r=NULL; n->h=1; return n;
}
struct node* right(struct node*y){
 struct node*x=y->l;
 y->l=x->r; x->r=y;
 y->h=max(height(y->l),height(y->r))+1;
 x->h=max(height(x->l),height(x->r))+1;
 return x;
}
struct node* left(struct node*x){
 struct node*y=x->r;
 x->r=y->l; y->l=x;
 x->h=max(height(x->l),height(x->r))+1;
 y->h=max(height(y->l),height(y->r))+1;
 return y;
}
int bal(struct node*n){
 return n?height(n->l)-height(n->r):0;
}
struct node* insert(struct node*n,int k){
 if(!n) return new(k);
 if(k<n->d) n->l=insert(n->l,k);
 else n->r=insert(n->r,k);
 n->h=1+max(height(n->l),height(n->r));
 if(bal(n)>1) return right(n);
 if(bal(n)<-1) return left(n);
 return n;
}
void inorder(struct node*r){
 if(r){ inorder(r->l); printf("%d ",r->d); inorder(r->r); }
}
int main(){
 struct node*r=NULL;
 r=insert(r,10); r=insert(r,20); r=insert(r,5);
 inorder(r);
}
