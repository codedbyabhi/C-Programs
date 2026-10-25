#include <stdio.h>
void main(){
    
   int side1;
   int side2;
   int side3;
 
    printf("Enter side 1 value :");
    scanf("%d",&side1);
    printf("Enter side 2 value :");
    scanf("%d",&side2);
    printf("Enter side 3 value :");
    scanf("%d",&side3);
    
    int sum;  
    if((side1+side2)>side3 && (side1+side3)>side2 && (side2+side3)>side1){
        
        printf("The triangle is valid");
    }
    else{
        
        printf("The triangle is not valid");
        
    }
        
}