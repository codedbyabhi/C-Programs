#include <stdio.h>

void main(){
    
    double a,b,c;
    printf("Enter Principle Amount : ");
    scanf("%lf",&a);
    printf("Enter Rate of Intrest : ");
    scanf("%lf",&b);
    printf("Enter Time Period in Years : ");
    scanf("%lf",&c);

    double interest = (a*b*c)/100;
    printf("Principle Amount : %lf\n",a);
    printf("Total intrest : %lf\n",interest);
    printf("Total Amount : %lf\n",(a+interest));

}