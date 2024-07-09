#include<stdio.h>
#include<string.h>
int main(){
 int rows,colums,i,j;
 printf("Enter number of rows and colums : ");
 scanf("%d %d",&rows,&colums);
  int arr[rows][colums],trans[colums][rows];
  printf("Enter element of matrix : \n");
  for ( i = 0; i < rows; i++)
  {
    for ( j = 0; j < colums; j++)
    {
      printf("Enter element a%d%d : ",i+1,j+1);
      scanf("%d",&arr[i][j]);
    }
  }
  printf("Entered matrix : \n");
  for ( i = 0; i < rows; i++)
  {
    for ( j = 0; j < colums; j++)
    {
      printf("%d        ",arr[i][j]);

    }
    printf("\n");
  }
  printf("Transpose of matrix : \n");
    for ( i = 0; i < colums; i++)
  {
    for ( j = 0; j < rows; j++)
    {
      printf("%d      ",arr[j][i]);
    }
    printf("\n");
  }

}
