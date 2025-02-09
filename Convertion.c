#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char x){
    if(top>=100-1){
        printf("\nStack overflow");
    }else{
        stack[++top]=x;
    }
} char pop(){
    if(top==-1){
        printf("\nStack underflow");
        exit(0);
    } else{
        return stack[top--];
    }
} int priority(char x){
    if(x=='('){
        return 0;
    } if(x=='+'||x=='-'){
        return 1;
    } if(x=='*'||x=='/'){
        return 2;
    } if(x=='^'){
        return 3;
        
    }

} void main(){
    char exp[100],x;
    printf("Enter the expression");
    scanf("%s",&exp);

    for(int i=0;exp[i]!='\0';i++){
        char  s=exp[i];
    

        if(isalnum(s)){
            printf("%c",s);
        } else if(s=='('){
            push(s);
        }else if(s==')'){
            while((x=pop())!='('){
                printf("%c",x);
            }
        }else{
            while(priority(stack[top])>=priority(s)){
                printf("%c",pop());
               
            } push(s);
        } 
    }
    while(top!=-1){
        printf("%c",pop());
    }
}