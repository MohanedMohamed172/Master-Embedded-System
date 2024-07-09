#include<stdio.h>
#include<string.h>
int main(){
int i,temp=0;
int num_elem,num_ser;
printf("Enter number of elements : ");
scanf("%d",&num_elem);
int arr[num_elem],x;
printf("Enter matrix \n");
for ( i = 0; i < num_elem; i++)
{
  scanf("%d",&arr[i]);
}
printf("Enter the element to be searched : ");
scanf("%d",&num_ser);
for(i=0;i<num_elem;i++){
  if(arr[i]==num_ser){
    printf("Number Found at location = %d",i+1);
    temp=1;
  }
}
if(temp==0){
printf("Not founded");
}
}
