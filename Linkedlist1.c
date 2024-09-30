#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
}*temp,*head=NULL,*ptr,*ptr2,*poin;
int item;
void insertion_at_begining();
void insertion_at_end();
void insertion_at_anypoint();
void print();
void deletion_at_begining();
void deletion_at_end();
void deletion_at_anypoint();
void insertion_at_begining(){
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("overflow");
    } printf("enter the data to be inserted:");
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
        return;
    }
     printf("enter the data to be inserted at end:");
        scanf("%d",&item);
         temp->link=NULL;
        temp->data=item;
     if(head==NULL){
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    }else{
        ptr=head;
         while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    }
} void insertion_at_anypoint(){
    int posi;
    struct node*p;
    temp=(struct node*)malloc(sizeof(struct node));
     if(temp==NULL){
        printf("overflow");
    } return;
    printf("enter the data to be inserted:");
    scanf("%d",&item);
    temp->data=item;
     if(head==NULL){
         temp->link=NULL;
        temp->data=item;
        head=temp;
        printf("%d",temp->data);
        printf("->%p\n",temp->link);
    }else{
         printf("enter the position of the node(value of data in left: )");
    scanf("%d",&posi);
    ptr=head;
    while(ptr!=NULL&&ptr->data!=posi){
        ptr=ptr->link;
    } if(ptr==NULL){
        printf("the node with data value %d not found",posi);
        free(temp);
        return;
    } 
     p=ptr->link;
      ptr->link=temp;
      temp->link=p;
    printf("%d", temp->data);
    printf("->%p\n",temp->link);
    }
} void deletion_at_begining(){
if(head==NULL){
    printf("linkedlist unerflow\n");
} return;
 ptr=head;
   if(head->link==NULL){
         head=NULL;
          printf("the deleted elemnt is %d",ptr->data);
           free(ptr);
    }
  else{
  ptr=head;
  head=ptr->link;
  printf("the deleted element is %d ",ptr->data);
  free(ptr);
 }} void deletion_at_end(){
    if(head==NULL){
        printf("LinkedList underflow\n");
    }
     else{
        ptr=head;
        ptr2=ptr->link;
        while(ptr2->link!=NULL){
            ptr=ptr->link;
            ptr2=ptr2->link;
        } printf("the deleted element is %d",ptr2->data);
        free(ptr2);
        ptr->link=NULL;
    }
 }void deletion_at_anypoint(){
     if(head==NULL){
    printf("linkedlist unerflow\n");
}
  if(ptr->link==NULL){
     ptr=head;
      head=NULL;
      printf("the deleted element is %d",ptr->data);
      free(ptr);
 } else{
    int value;
    printf("enter the value of the data to be deleted");
    scanf("%d",&value);
    ptr=head;
    ptr2=ptr->link;
    while(ptr2!=NULL&&ptr2->data!=value){
        ptr=ptr->link;
        ptr2=ptr2->link;
    } ptr->link=ptr2->link;
    free(ptr2);
 }

 }
 

 void print(){
    if(head==NULL){
        printf("the linked list is empty\n");
    } else{
 printf("the linked list is:\n");
 poin=head;
    while(poin!=NULL){
        printf("->%d",poin->data);
         poin=poin->link;
    }
}}
 void main(){
    char v;
    int choice,choice1;
    
    
    do{
       printf("enter your choice\n");
       printf("If your choice is 1:Insrtion->type I or i\n");
        printf("If your choice is 1:Deletion->type D or d\n");
        printf("If your choice is display,enter S\n");
        printf("Or type E or e to exit\n");
        scanf(" %c",&v);
        if(v=='I'||v=='i'){
            printf("Enter your choice of insertion");
            printf("\n1:Insertion at Begining\n2:Insertion at End\n3:Insertion at Anypoint\n4:Exit");
            scanf("%d",&choice);
            switch(choice){
            case 1:insertion_at_begining();
            break;
            case 2: insertion_at_end();
            break;
            case 3:insertion_at_anypoint();
            break;
            case 4:
            printf("exiting\n");
            break;
            default:printf("enter a valid option\n");
            }}
         else if(v=='D'||v=='d'){
            printf("Enter your choice of deletionS");
             printf("\n1:Deletion at Begining\n2:Deletion at End\n3:Deletion at Anypoint\n4:Exit");
            scanf("%d",&choice1);
            switch(choice1){
            case 1: deletion_at_begining();
            break;
            case 2: deletion_at_end();
            break;
            case 3: deletion_at_anypoint();
            break;
            case 4:
            printf("exiting\n");
            break;
            default:printf("enter a valid option\n");
            }
        } else if(v=='s'||v=='S'){
            print();
        }
        }while(v!='E'&&v!='e');
        
       
        
     
    
}
