#include<stdio.h>
int main(){
    float x,y,z;
    printf("Enter three numbers:");
    scanf("%f %f %f",&x,&y,&z);
    if(x>y&&x>z)
    printf("largest num is:%f",x);
     if(x<y&&y>z)
    printf("largest num is:%f",y);
    else
    printf("largest num is:%f",z);

}