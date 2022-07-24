#include<stdio.h>
void main(void){
    char character;
    printf("Enter a character: ");
    scanf("%c",&character);
      if((65<=character)&&(character<=90)||(97<=character)&&(character<=122)){
        printf("\n %c is an alphapet",character); 
    }else{
        printf("\n %c is not an alphapet",character);
    } 
 
   } 