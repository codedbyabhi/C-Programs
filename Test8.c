#include <stdio.h>

void main(){
    int a;
    
    printf("Enter The number : ");
    scanf("%d",&a);
    if(a<0){
        printf("Negative Number");
    }
    else if(a>0){
        printf("Positive Number");
    }
    else {
        printf("Neutral Number");
    }
}