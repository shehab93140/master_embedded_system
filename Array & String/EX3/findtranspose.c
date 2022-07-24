#include <stdio.h>
#define row 2
#define column 3
 void main(void){
    int arr[row][column]={0};
    printf("Enter rows and column of materix: %d %d",row,column);
    printf("\nEnter elements of materix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter elements of a%d%d: ",i+1,j+1);
            fflush(stdin);
            fflush(stdout);
            scanf("%d",&arr[i][j]);
            printf("\n");
        }
    }
         printf("Entered Matrix: \n");
          for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d",arr[i][j]);
          
            printf("\t");
        }
            printf("\n");
    }

        printf("Transpose of Matrix: \n");
          for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            printf("%d",arr[j][i]);
          
            printf("\t");
        }
            printf("\n");
    }
 }