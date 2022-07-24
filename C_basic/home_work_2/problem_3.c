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
