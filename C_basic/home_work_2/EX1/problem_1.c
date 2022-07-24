#include<stdio.h>
void main(void){
    int number=0; //define variable called number in memory
    printf("Enter an integer you want to check: ");
    scanf("%d",&number);
    if(number%2==0){  //check if number is even or odd
        printf("\n %d is even",number);
    }
    else{
         printf("\n %d is odd",number);
    }
}