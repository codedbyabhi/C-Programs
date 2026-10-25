//Multiply table for given number

#include <stdio.h>
void main(){
    
    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);
    
    for(int i = 1; i<=10; i++){
        
        printf("%d\n",(i*a));
    }
}