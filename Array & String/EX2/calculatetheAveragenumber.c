#include <stdio.h>
#define average 6
void main(void)
{
    float arr[6];
    float sum=0;
  printf("Enter the numbers of data: %d\n",average);
  for(int i=0;i<average;i++){
    printf("%d.Enter number: \n",i+1);
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&arr[i]);
    sum+=arr[i];
  }
  printf("Average = %.2f",sum/average);

}
