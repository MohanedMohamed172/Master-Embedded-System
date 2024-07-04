#include<stdio.h>
#include<ctype.h>
int main(){
    char x;
    printf("Enter character :");
    scanf("%c",&x);
    if(isalpha(x)!=0)
    printf("is an alphabet");
    else
    printf("is an not alphabet");
}