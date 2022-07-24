#include<stdio.h>
void main(void){
    int number=0,n=1;
    printf("Enter an integer: ");
    scanf("%d",&number);
    if(number<0){
        printf("Error!!! Factorial of negative number doesn\'t exist.\n");
    
    }
    else if(number>=1) {
        while (number>0)
        {
        n*=number;
        number--;
        }
        printf("Factorial = %d",n);
    }
    else{
        printf("Factorial = zero");
    }
}