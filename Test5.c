#include <stdio.h>

void main(){
    double price,discount;
    
    printf("Enter the Price : ");
    scanf("%lf",&price);
    printf("Enter the Discount : ");
    scanf("%lf",&discount);
    
    double finalPrice =(price*(100-discount))/100;
    printf("Final price : %.2lf",finalPrice);
} 