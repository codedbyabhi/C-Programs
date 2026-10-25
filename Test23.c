#include <stdio.h>
void main(){
    
    int start,end;
    printf("Enter the Start and End value : ");
    scanf("%d",&start);
    scanf("%d",&end);
    
    for(int i =start; i<=end; i++){
        
        if(i%2==0){
            printf("%d\n",i);
        }
        
    }
}