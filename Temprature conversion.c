#include<stdio.h>
#include<string.h>
void tocelcius(int c,char s[]);
void tofarenheit(int c,char s[]);
void tokelvin(int c,char s[]);
void main(){
    int opt=0;
    float c;
    char s[10];
    printf("enter the current form of the value(eg:celcius,farenheit,kelvin....etc)\n");
    scanf("%s",&s);
    printf("enter the value of scale\n");
    scanf("%f",&c);
    while(opt!=4){
        printf("enter your choice of which scale of temprature you need to convert to..........\n");
        printf("\n1:TO CELCIUS");
        printf("\n2:TO FARENHEIT");
        printf("\n3:TO KELVIN");
        printf("\n4:EXIT");
        printf("\nenter your choice");
        scanf("%d",&opt);
        switch(opt){
            case 1:tocelcius(c,s);
            break;
            case 2:tofarenheit(c,s);
            break;
            case 3:tokelvin(c,s);
            break;
            case 4:
            printf("****EXITING****\n");
            break;
        }

    }
} void tocelcius(int c,char s[]){
    char cel[]="celcius";
    char celc[]="CELCIUS";
    char kel[]="kelvin";
    char kelv[]="KELVIN";
    char far[]="farenheit";
    char faren[]="FARENHEIT";
    float celcius;
    if(strcasecmp(s,"celcius")==0){
       printf("Already in celcius\n");
    } return;
    if(strcasecmp(s,"kelvin")==0){
     celcius=c-273.15;
    }else{
        celcius=(c-32)*0.5;
    }
    printf("the value in celcius is  %d\n",celcius);
}
  void tofarenheit(int c,char s[]){
     char cel[]="celcius";
    char celc[]="CELCIUS";
    char kel[]="kelvin";
    char kelv[]="KELVIN";
    char far[]="farenheit";
    char faren[]="FARENHEIT";
    float farenheit;
    if(strcasecmp(s,"farenheit")==0){
       printf(" Already in farenheit\n");
    } return;
     if(strcasecmp(s,"kelvin")==0){
      farenheit=((c-273.15)*1.8)+32;
    }else{
        farenheit=(c*1.8)+32;
    }
    printf("the value in farenheit is  %f\n",farenheit);
}void tokelvin(int c,char s[]){
     char cel[]="celcius";
    char celc[]="CELCIUS";
    char kel[]="kelvin";
    char kelv[]="KELVIN";
    char far[]="farenheit";
    char faren[]="FARENHEIT";
    float kelvin;
    if(strcasecmp(s,"kelvin")==0){
       printf("Already in already in kelvin\n");
    }return;
     if(strcasecmp(s,"farenheit")==0){
      kelvin=((c-32)*0.5)+273.15;
    }else{
        kelvin=c+273.15;
    }
    printf("the value in kelvin is  %f\n",kelvin);
}