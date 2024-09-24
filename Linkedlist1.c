#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
}*temp,*head=NULL,*ptr;
int item;
void insertion_at_begining();
void insertion_at_end();
void insertion_at_begining(){
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("overflow");
    } printf("enter the data to be inserted ");
        scanf("%d",&item);
     if(head==NULL){
        temp->link=NULL;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    
    }else{
        temp->link=head;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",head->link);
    }
} void insertion_at_end(){
      temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("overflow");
    }printf("enter the data to be inserted at end");
        scanf("%d",&item);
     if(head==NULL){
        temp->link=NULL;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    }else{
        ptr=head;
         while(ptr->link!=NULL){
            ptr=ptr->link;
        }
         temp->link=NULL;
        temp->data=item;
        ptr->link=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    }
}
 void main(){
    int x;
    do{
        printf("\nenter your option\n");
        scanf("%d",&x);
        switch(x){
            case 1:insertion_at_begining();
            break;
            case 2: insertion_at_end();
            break;
            case 3:break;
            default:printf("enter a valid option\n");
        }
    } while(x!=3);
}
