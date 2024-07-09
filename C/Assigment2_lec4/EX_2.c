#include<stdio.h>
#include<string.h>
int main(){
int i=0,temp=0;
char arr[100];
printf("Enter a string : ");
gets(arr);
while (arr[i]!=0)
{
  temp++;
  i++;
}
printf("Length of string : %d ",temp);
}
