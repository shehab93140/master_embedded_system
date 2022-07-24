
#include<stdio.h>
void main(void){
    float number;
    printf("Enter a number: ");
    scanf("%f",&number);
    if(number>0){
        printf("\n%0.2f is positive",number,number);
    }
    else if(number<0){
        printf("\n%0.2f is negative",number,number);
    }
    else{
        printf("\n You enterd zero",(int)number);
    }