#include<stdio.h>
void main(){
    
    int s1;
    int s2;
    int s3;
    
    printf("Enter the Side 1 :");
    scanf("%d",&s1);
    printf("Enter the Side 2 :");
    scanf("%d",&s2);
    printf("Enter the Side 3 :");
    scanf("%d",&s3);
    
    if(s1==s2 || s2==s3){
        
        printf("The triangle is equilatral");
    }
    if(s1==s2 || s2==s3 || s1==s3){
        
        printf("The triangle is isosceles");
    }
    if(s1!=s2 || s2!=s3 || s1!=s3){
        
        printf("The triangle is scalene");
    }
   
    
}