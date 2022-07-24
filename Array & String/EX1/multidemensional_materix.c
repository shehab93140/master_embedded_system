#include <stdio.h>
void main(void)
{
    float arr1[2][2];
    float arr2[2][2];
    int size = sizeof(arr1) / sizeof(arr1[0]);
    printf("Enter the elements of 1st materix\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter a%d%d: ",i,j);
            fflush(stdin);
			fflush(stdout);
            scanf("%f", &arr1[i][j]);
          

        }
    }
    printf("Enter the elements of 2st materix\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter b%d%d: ",i,j);
            fflush(stdin);
			fflush(stdout);
            scanf("%f", &arr2[i][j]);
        }
    }
   
    printf("Enter the elements of 2st materix\n");
    printf("%.2f \t", arr1[0][0] + arr2[0][0]);
    printf("%.2f \n", arr1[0][1] + arr2[0][1]);
    printf("%.2f \t", arr1[1][0] + arr2[1][0]);
    printf("%.2f \n", arr1[1][1] + arr2[1][1]);
}
