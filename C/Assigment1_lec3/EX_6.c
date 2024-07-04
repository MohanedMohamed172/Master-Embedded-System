#include<stdio.h>
int main(){
    float a,b,z;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    z=a;
    a=b;
    b=z;
    printf("After swapping, value of a = %f\n",a);
    printf("After swapping, value of a = %f",b);
}