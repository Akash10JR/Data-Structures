#include<stdio.h>
#include<stdlib.h>

struct node{
    int data,height;
    struct node *left,*right;
};

int max(int a,int b){ return a>b?a:b; }
int height(struct node *n){ return n?n->height:0; }

struct node* newNode(int x){
   	struct node*n=malloc(sizeof(struct node));
    n->data=x;
    n->left=n->right=NULL;
    n->height=1;
    return n;
}

struct node* rightRotate(struct node *y){
    struct node *x=y->left;
    y->left=x->right;
    x->right=y;

    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;
    return x;
}

struct node* leftRotate(struct node *x){
    struct node *y=x->right;
    x->right=y->left;
    y->left=x;

    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;
    return y;
}

int getBalance(struct node *n){
    return n?height(n->left)-height(n->right):0;
}

/* INSERT */
struct node* insert(struct node* n,int k){
    if(!n) return newNode(k);

    if(k<n->data) n->left=insert(n->left,k);
    else if(k>n->data) n->right=insert(n->right,k);
    else return n;

    n->height=1+max(height(n->left),height(n->right));

    if(getBalance(n)>1) return rightRotate(n);
    if(getBalance(n)<-1) return leftRotate(n);

    return n;
}

/* FIND MIN */
struct node* minValue(struct node* n){
    while(n->left) n=n->left;
    return n;
}

/* DELETE */
struct node* deleteNode(struct node* root,int k){
    if(!root) return root;

    if(k<root->data) root->left=deleteNode(root->left,k);
    else if(k>root->data) root->right=deleteNode(root->right,k);
    else{
        if(!root->left || !root->right){
            struct node *temp=root->left?root->left:root->right;
            if(!temp){ temp=root; root=NULL; }
            else *root=*temp;
            free(temp);
        }else{
            struct node *temp=minValue(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }

    if(!root) return root;

    root->height=1+max(height(root->left),height(root->right));

    if(getBalance(root)>1) return rightRotate(root);
    if(getBalance(root)<-1) return leftRotate(root);

    return root;
}

/* SEARCH */
void search(struct node* r,int k){
    if(!r) printf("Not Found\n");
    else if(r->data==k) printf("Found\n");
    else if(k<r->data) search(r->left,k);
    else search(r->right,k);
}

/* INORDER */
void inorder(struct node *r){
    if(r){ inorder(r->left); printf("%d ",r->data); inorder(r->right); }
}

int main(){
    struct node *root=NULL;

    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,5);

    printf("AVL Tree: ");
    inorder(root);

    printf("\nSearching 20: ");
    search(root,20);

    root=deleteNode(root,10);
    printf("After Deletion: ");
    inorder(root);
}

