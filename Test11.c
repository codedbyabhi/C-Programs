#include <stdio.h>
void main(){
    
    int a;
    int b;
    
    printf("Enter first Number :");
    scanf("%d",&a);
    printf("Enter second Number :");
    scanf("%d",&b);
    printf("==============================\n");
    
    printf("Enter 1 For Add(+)\n");
    printf("Enter 2 For Sub(-)\n");
    printf("Enter 3 For Multi(*)\n");
    printf("Enter 4 For Divi(/)\n");
    printf("Enter 5 For Divi(%)\n");
    
    printf("==============================\n");
    
    int choice;
    printf("Enter your Choice :");
    scanf("%d",&choice);
    if(choice==1){
        printf("Add of the number is :%d\n",(a+b));
    }
    else if(choice==2){
        printf("Sub of the number is :%d\n",(a-b));
    }
    else if(choice==3){
        printf("Muti of the number is :%d\n",(a*b));
    }
    else if(choice==4){
        printf("Divi of the number is :%d\n",(a/b));
    }
    else if(choice==5){
        printf("Divi of the number is :%d\n",(a%b));
    }
    else{
        printf("Enter valid Input\n");
    }
    printf("==============================\n");
    printf("Need Revision \n");
    printf("==============================\n");
    
    
}