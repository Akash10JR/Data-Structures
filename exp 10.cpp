#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    struct node *head=NULL,*temp,*newnode;
    int ch=1;
    while(ch) {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
            head=newnode;
        else {
            temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=newnode;
        }
        printf("Continue 1/0: ");
        scanf("%d",&ch);
    }
    temp=head;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
