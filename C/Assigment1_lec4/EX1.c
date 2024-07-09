#include<stdio.h>
#include<string.h>
int main(){
   int i;
    float x[4],y[4];
    printf("Enter the elements of the first array : \n");
    for ( i = 0; i < 4; i++)
    {
      scanf("%f",&x[i]);
    }
    printf("Enter the elements of the second array : \n");
    for ( i = 0; i < 4; i++)
    {
      scanf("%f",&y[i]);
    }
    
    printf("Sum of matrix : \n");
    for ( i = 0; i < 4; i++)
    {
      printf("%f   ",x[i]+y[i]);
      if (i==1)
      {
        printf("\n");
      }
      
    }
    
}