#include <stdio.h>
void main(){
    
    int hour;
    printf("Enter the hour (24hr format) :");
    scanf("%d",&hour);
    
    if(hour<=0 || hour>=24){
        printf("Enter valid hour");
    }
    if(hour>=0 && hour<=11){
        printf("Morning");
    }
    if(hour>11 && hour<=15){
        printf("Afternoon");
    }
   if(hour>15 && hour<=18){
        printf("Evening");
    }
    if(hour>18 && hour<=23){
        printf("Night");
    }

}