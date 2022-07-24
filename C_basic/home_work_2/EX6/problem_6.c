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