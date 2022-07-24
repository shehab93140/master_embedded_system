#include<stdio.h>
void main(void){
int number1,number2;
printf("number1 before swapping =");
scanf("%d",&number1);
printf("number2 before swapping =");
scanf("%d",&number2);
printf("number1=%d ,number2=%d",number1,number2);
number1=number1+number2;
number2=number1-number2;
number1=number1-number2;
printf("\n");
printf(" number1=%d",number1);
printf(" number2=%d",number2);}