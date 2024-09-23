#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
}*temp,*head=NULL;
void insertion();
void insertion(){
    int item;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("overflow");
    } if(head==NULL){
        printf("enter the data to be inserted");
        scanf("%d",&item);
        temp->link=NULL;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    
    }else{
         printf("enter the data to be inserted");
        scanf("%d",&item);
        temp->link=head;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",head->link);
    }
} void main(){
    int x;
    do{
        printf("\nenter your option\n");
        scanf("%d",&x);
        switch(x){
            case 1:insertion();
            break;
            case 2:break;
            default:printf("enter a valid option\n");
        }
    } while(x!=2);
}