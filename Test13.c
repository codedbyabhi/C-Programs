#include <stdio.h>

void main(){
    
    printf("================================\n");
    printf("The 2D Area Calculator\n");
    printf("================================\n");
    
    printf("Enter 1 for area Of Circle\n");
    printf("Enter 2 for area Of Square\n");
    printf("Enter 3 for area Of Triangle\n");
    printf("Enter 4 for area Of Rectangle\n");
    
    printf("================================\n");
    
    int choice;
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    
    printf("================================\n");
    
    switch(choice){
        
        case 1 : {
            printf("You selected Circle to find its area\n");
            double c;
            printf("Enter radius of Circle : ");
            scanf("%lf",&c);
            printf("Area of Circle is : %.2lf\n",(3.14*c*c));
        }break;
        
        case 2 : {
            printf("You selected Square to find its area\n");
            double s;
            scanf("%lf",&s);
            printf("Area Of Square is : %.2lf\n",(s*s));
        }break;
        
        case 3 :{
            printf("You selected Triangle to find its area\n");
            double b,h;
            printf("Enter the Base : ");
            scanf("%lf",&b);
            printf("Enter the Height : ");
            scanf("%lf",&h);
            printf("Area of triangle is : %.2lf\n",(0.5*b*h));
        }break;
        
        case 4 :{
            printf("You selected Rectangle to find its area\n");
            double l,b;
            printf("Enter Lenght of a Rectangle ; ");
            scanf("%ld",&l);
            printf("Enter Breadth of a Rectangle : ");
            scanf("%ld",&b);
            printf("Area of rectangle is : %.2lf\n",(l*b));
            
        }break;
        
        default : printf("Enter valid Input\n");
        
  printf("================================\n");
  printf("=Thankyou Visit Again=\n");
  printf("================================\n");
        
            
        }
    }
    
