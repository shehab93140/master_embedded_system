/*#include<stdio.h>
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
}*/

/*#include <stdio.h>
void main(void)
{
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);
    if ((alphabet == 'a') || (alphabet == 'o') || (alphabet == 'i') || (alphabet == 'e') || (alphabet == 'u'))
    {
        printf("\n%c is avowel", alphabet);
    }
    else
    {
        printf("\n %c is consonant", alphabet);
    }
}*/
/*
#include<stdio.h>
void main(void){
    float arr[3];
    printf("Enter three numbers: ");
    for (int i = 0; i < 3; i++)
    {
        
    scanf("%f",&arr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        
    printf("%0.3f\n",arr[i]);
    }
    if (arr[0]>arr[1]&&arr[0]>arr[2])
    {
        
    printf("largest number =%0.3f",arr[0]);
    }
    else if(arr[1]>arr[0]&&arr[1]>arr[2])
    {

    printf("largest number =%0.3f",arr[1]);
    }
    else{
      printf("largest number =%0.3f",arr[2]);  
    }   
}
*/

/*
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
}*/
/*
#include<stdio.h>
void main(void){
    char character;
    printf("Enter a character: ");
    scanf("%c",&character);
 // for(character=0;character<=122;character++){  //just for testing 
      if((65<=character)&&(character<=90)||(97<=character)&&(character<=122)){
        printf("\n %c is an alphapet",character); 
    }else{
        printf("\n %c is not an alphapet",character);
    } 
 // }
   }   
   */
  /*
  #include<stdio.h>
  void main(void){
      int number=0,n=0;
     printf("Enter an integer: ");
      scanf("%d",&number); 
      while (number>=0){
        n+=number;
        number--;
      }
      printf("sum= %d",n);   
  }
  */
 /*
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
*/
/*
#include <stdio.h>
void main(void)
{
    char operator;
    float result=0, num1=0, num2=0;
    printf("Enter operator either + or - or * or divide :  ");
    scanf("%c", &operator);
    printf("\nEnter two operands:");
    fflush(stdin);
    scanf("%f", &num1);
    fflush(stdin);
    scanf("%f", &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
        //  default:
        //  break;
    }
    printf("%0.2f ", num1);
    printf("%c ", operator);
    printf("%0.2f = ", num2);
    printf("%0.2f ", result);
}
*/
