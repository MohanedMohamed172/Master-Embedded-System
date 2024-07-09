#include<stdio.h>
#include<string.h>
int main(){
int i;
int num_elem,num_ins,loc;
printf("Enter number of elements : ");
scanf("%d",&num_elem);
int arr[num_elem],x;
printf("Enter matrix \n");
for ( i = 0; i < num_elem; i++)
{
  scanf("%d",&arr[i]);
}
printf("Enter the element to be inserted : ");
scanf("%d",&num_ins);
printf("Enter location : ");
scanf("%d",&loc);
for ( i = num_elem; i >=loc; i--)
{

  arr[i]=arr[i-1];

}
num_elem++;
arr[loc-1]=num_ins;
for ( i = 0; i < num_elem; i++)
{
  printf("%d   ",arr[i]);
}
}
