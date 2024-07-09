#include<stdio.h>
#include<string.h>
int main(){
int i,temp=0;
char arr[100],fre;
printf("Enter a string : ");
gets(arr);
printf("Enter a character to find frequancy : ");
scanf("%c",&fre);
for(i=0;i<strlen(arr);i++){
  if(arr[i]==fre)
  temp++;
}
if(temp==0)
printf("Not exist");
else
printf("Frecuancy of %c =%d",fre,temp);
}
