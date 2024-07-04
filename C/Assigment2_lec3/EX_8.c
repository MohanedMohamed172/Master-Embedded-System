#include<stdio.h>
int main(){
    int x,y;
    char z;
    printf("Enter operation:");
    scanf("%c",&z);
    switch (z)
    {
    case '+':
       printf("Enter two operands :");
       scanf("%d %d",&x,&y);
       printf("%d + %d = %d",x,y,x+y);
        break;
    case '-':
       printf("Enter two operands :");
       scanf("%d %d",&x,&y);
       printf("%d - %d = %d",x,y,x-y);
        break;    
    case '*':
       printf("Enter two operands :");
       scanf("%d %d",&x,&y);
       printf("%d +* %d = %d",x,y,x*y);
        break;
    case '/':
       printf("Enter two operands :");
       scanf("%d %d",&x,&y);
       printf("%d / %d = %d",x,y,x/y);
        break;    
    default:
        break;
    }
}