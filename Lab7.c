#include<stdio.h>
void main(){
    
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    
    if(num<0){
        printf("negative number");
    }
    if(num>0){
        printf("possitive number");
    }
}