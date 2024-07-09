#include<stdio.h>
#include<string.h>
int main(){
   int i;
    int number;
    printf("Enter number of data : ");
    scanf("%d",&number);
     float x[number],sum=0,avr;
    for ( i = 0; i < number; i++)
    {
       printf("Enter number : ");
      scanf("%f",&x[i]);
      sum+=x[i];
    }
avr=sum/number;
printf("Average = %f",avr);
    
}