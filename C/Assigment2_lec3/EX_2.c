#include<stdio.h>
int main(){
    char x;
    printf("Enter character:");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    printf("%c is a vowel",x);
    else
    printf("%c is a alphapet",x);
}