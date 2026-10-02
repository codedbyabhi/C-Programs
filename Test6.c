#include <stdio.h>

void main(){
    int a;
    printf("Enter the integer : ");
    scanf("%d",&a);
    if(a<0)
    {
        a = (a * -1);
    }
    printf("Absolute value :%d",a);
}