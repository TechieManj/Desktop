#include<stdio.h>
int main()
{
    int age;
    printf("enter number:\n");
    scanf("%d", age);
    if(age>18){
        printf("able for voting\n");
    
    }
    else{
        printf("not able ");
    }
    return 0;
}