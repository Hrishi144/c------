#include<stdio.h>
void main(){
    char sentence[100];
    printf("Enter the sentence");
    fgets(sentence,sizeof(sentence),stdin);
    printf("Entered sentence is\n");
    printf("%s",sentence);
}