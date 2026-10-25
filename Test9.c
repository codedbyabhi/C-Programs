#include <stdio.h>
void main(){
    
    int dayNumber;
    printf("Enter the Day Number :");
    scanf("%d",&dayNumber);
    
    if(dayNumber==1){
        printf("Sunaday");
    }
    else if(dayNumber==2){
        printf("Monday");
    }
    else if(dayNumber==3){
        printf("Tuesday");
    }
    else if(dayNumber==4){
        printf("Wednesday");
    }
    else if(dayNumber==5){
        printf("Thusday");
    }
    else if(dayNumber==6){
        printf("Friday");
    }
    else if(dayNumber==7){
        printf("Saturday");
    }
    else{
        printf("Entar Valid input");
    }
}