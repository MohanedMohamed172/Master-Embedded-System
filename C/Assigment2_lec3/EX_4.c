#include<stdio.h>
int main(){
    float x;
    printf("Enter Num:");
    scanf("%f",&x);
if(x>0)
printf("%f is positive",x);
else if(x<0)
printf("%f is negative",x);
else
printf("You Entered zero");
}