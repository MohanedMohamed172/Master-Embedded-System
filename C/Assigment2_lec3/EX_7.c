#include<stdio.h>
int main(){
    int x,mult=1;
    printf("Enter num :");
    scanf("%d",&x);
    if(x==0||x==1)
    printf("Factorial is : 1");
    else if(x<0)
    printf("Error! Factorial of negative number dose not exist");
    else{
        for (int i = 1; i <=x; i++)
        {
            mult*=i;

        }
        printf("Factorial is : %d",mult);

    }
}
